using UnityEngine;
using System.Collections.Generic;

public class OrbitDebugDisplay : MonoBehaviour
{
    [SerializeField] NBodySimulation m_bodySimulation;
    [SerializeField] public List<CelestialBody> m_body;
    [SerializeField] public VirtualBody[] virtualBodies;
    [SerializeField] public Vector3[][] drawPoints;
    public int numSteps = 1000;
    public float timeStep = 0.1f;
    public bool usePhysicsTimeStep;
    private bool hasStarted = false;
    public bool relativeToBody;
    public CelestialBody centralBody;
    public float width = 100;
    public bool useThickLines;
    public float gravitationalConstant = Universe.gravitationalConstant;

    private void Awake()
    {
        
    }
    void Start()
    {
    }

    public void DestroyCelestialObject(CelestialBody body)
    {
        if (m_body.Contains(body))
            m_body.Remove(body);
        if (m_bodySimulation.bodies.Contains(body))
            m_bodySimulation.bodies.Remove(body);
    }
    void Update()
    {
        if (m_body.Count == 0)
        {
            foreach (var celestialBody in FindObjectsOfType<CelestialBody>())
            {
                m_body.Add(celestialBody);
                centralBody = FindObjectOfType<Sun>().GetComponent<CelestialBody>();
            }
        }
        if (m_body.Count == 0)
            return;
        DrawOrbits();
    }

    public void Rewind()
    {
        m_bodySimulation.Rewind();
    }

    public void SetSunToBlackHole()
    {
        centralBody.GetComponent<Sun>().ChangeToBlackHole();
    }

    public void NormalSpeed()
    {
        m_bodySimulation.SetSpeedValue(1);
    }
    public void FastForward()
    {
        m_bodySimulation.SetSpeedValue(10);
    }
    public void Play()
    {
        if (!hasStarted)
        {
            Stop();
            hasStarted = true;
        }
        m_bodySimulation.StartPlay();
    }

    public void Pause()
    {
        m_bodySimulation.PausePlay();
    }

    public void Stop()
    {
        foreach (CelestialBody celestialBody in m_body)
        {
            celestialBody.ResetState();
        }
        m_bodySimulation.Reset();
        Pause();
    }

    public void DrawOrbits()
    {
        virtualBodies = null;
        drawPoints = null;
        virtualBodies = new VirtualBody[m_body.Count];
        drawPoints = new Vector3[m_body.Count][];
        int referenceFrameIndex = 0;
        Vector3 referenceBodyInitialPosition = Vector3.zero;

        // Initialize virtual bodies (don't want to move the actual bodies)
        for (int i = 0; i < virtualBodies.Length; i++)
        {
            virtualBodies[i] = new VirtualBody(m_body[i]);
            drawPoints[i] = new Vector3[numSteps];

            if (m_body[i] == centralBody && relativeToBody)
            {
                referenceFrameIndex = i;
                referenceBodyInitialPosition = virtualBodies[i].position;
            }
        }

        // Simulate
        for (int step = 0; step < numSteps; step++)
        {
            Vector3 referenceBodyPosition = (relativeToBody) ? virtualBodies[referenceFrameIndex].position : Vector3.zero;
            // Update velocities
            for (int i = 0; i < virtualBodies.Length; i++)
            {
                virtualBodies[i].velocity += CalculateAcceleration(i, virtualBodies) * timeStep; //* m_bodySimulation.gameObject.transform.localScale.x;

            }
            // Update positions
            for (int i = 0; i < virtualBodies.Length; i++)
            {
                
                Vector3 newPos = virtualBodies[i].position + virtualBodies[i].velocity * timeStep;
                
                virtualBodies[i].position = newPos;
                if (relativeToBody)
                {
                    var referenceFrameOffset = referenceBodyPosition - referenceBodyInitialPosition;
                    newPos -= referenceFrameOffset;
                }
                if (relativeToBody && i == referenceFrameIndex)
                {
                    newPos = referenceBodyInitialPosition;
                }
                drawPoints[i][step] = newPos;
            }
        }

        // Draw paths
        for (int bodyIndex = 0; bodyIndex < virtualBodies.Length; bodyIndex++)
        {
            if (m_body[bodyIndex].gameObject.GetComponentInChildren<MeshRenderer>())
            {
                var pathColour = m_body[bodyIndex].gameObject.GetComponentInChildren<MeshRenderer>().sharedMaterial.color; //
                if (useThickLines)
                {
                    var lineRenderer = m_body[bodyIndex].gameObject.GetComponentInChildren<LineRenderer>();
                    Debug.Log(lineRenderer);
                    lineRenderer.enabled = true;
                    lineRenderer.sortingOrder = 1;
                    lineRenderer.positionCount = drawPoints[bodyIndex].Length;
                    lineRenderer.startColor = pathColour;
                    lineRenderer.endColor = pathColour;
                    lineRenderer.widthMultiplier = width * m_bodySimulation.gameObject.transform.localScale.x;
                    lineRenderer.SetPositions(drawPoints[bodyIndex]);
                }
            }
            
        }

    }

    Vector3 CalculateAcceleration(int i, VirtualBody[] virtualBodies)
    {
        Vector3 acceleration = Vector3.zero;
        for (int j = 0; j < virtualBodies.Length; j++)
        {
            if (i == j)
            {
                continue;
            }
            Vector3 forceDir = (virtualBodies[j].position - virtualBodies[i].position).normalized;
            float sqrDst = (virtualBodies[j].position - virtualBodies[i].position).sqrMagnitude;
            acceleration += forceDir * Universe.gravitationalConstant * virtualBodies[j].mass / sqrDst;
        }
        return acceleration;
    }


    void HideOrbits()
    {
        CelestialBody[] bodies = FindObjectsOfType<CelestialBody>();

        // Draw paths
        for (int bodyIndex = 0; bodyIndex < bodies.Length; bodyIndex++)
        {
            var lineRenderer = bodies[bodyIndex].gameObject.GetComponentInChildren<LineRenderer>();
            lineRenderer.positionCount = 0;
        }
    }

    public class VirtualBody
    {
        public Vector3 position;
        public Vector3 velocity;
        public float mass;

        public VirtualBody(CelestialBody body)
        {
            position = body.transform.position;
            velocity = body.velocity;
            mass = body.mass;
        }
    }
}