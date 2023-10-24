using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NBodySimulation : MonoBehaviour {
    [SerializeField] public float scale = 1f;
    public List<CelestialBody> bodies;
    [SerializeField] public float originalScale = 1f;
    [SerializeField] public OrbitDebugDisplay m_orbit;
    [SerializeField] Button m_button;
    private int m_speedValue;
    static NBodySimulation instance;
    private bool playing = false;
    private bool rewind = false;
    private bool hasClickedOnBar = false;
    int countDelay = 0;

    void Awake () {
        
        Time.fixedDeltaTime = Universe.physicsTimeStep;
    }

    public void SetSpeedValue(int newSpeedValue)
    {
        m_speedValue = newSpeedValue;
    }
    public void DebugTry()
    {
        if (m_button)
        {
            m_button.image.color = Color.green;
        }
    }

    public void Rewind()
    {
        if (!rewind)
        {
            countDelay = bodies[0].GetPositionCount();
            rewind = true;
        }
        else
            rewind = false;
        
    }

    private void Update()
    {
        if (bodies.Count != 0)
            return;
        foreach (var celestialBody in FindObjectsOfType<CelestialBody>())
        {
            bodies.Add(celestialBody);
        }
    }
    public void Reset()
    {
        m_speedValue = 1;
    }

    public void StartPlay()
    {
        playing = true;
        rewind = false;
    }

    public void PausePlay()
    {
        playing = false;
    }

    void FixedUpdate () {
        if (!playing)
            return;
        if (playing)
        {
            Debug.Log("playing is ok");
            if (!rewind)
            {
                Debug.Log("rewind is ok");
                for (int i = 0; i < bodies.Count; i++)
                {
                    Vector3 acceleration = CalculateAcceleration(bodies[i].Position, bodies[i]);
                    bodies[i].UpdateVelocity(acceleration, Universe.physicsTimeStep * m_speedValue);
                    if (!hasClickedOnBar)
                        bodies[i].AddCelestialBodyVelo();
                }

                for (int i = 0; i < bodies.Count; i++)
                {
                    bodies[i].UpdatePosition(Universe.physicsTimeStep * m_speedValue);
                    if (!hasClickedOnBar)
                        bodies[i].AddCelestialBodyPos();
                }
            }
            else
            {
                for (int i = 0; i < bodies.Count; i++)
                {
                    bodies[i].velocity = bodies[i].GetVelocityAt(countDelay);
                    bodies[i].transform.position = bodies[i].GetPositionAt(countDelay);
                }
                countDelay -= 1;
            }
            
        }
    }

    public static Vector3 CalculateAcceleration (Vector3 point, CelestialBody ignoreBody = null) {
        Vector3 acceleration = Vector3.zero;
        foreach (var body in Instance.bodies)
        {
            if (body != ignoreBody)
            {
                Vector3 forceDir = (body.Position - point).normalized;
                float sqrDst = (body.Position - point).sqrMagnitude;
                acceleration += forceDir * Universe.gravitationalConstant * body.mass / sqrDst;
            }
        }
        return acceleration;
    }

    public static List<CelestialBody> Bodies {
        get {
            return Instance.bodies;
        }
    }

    static NBodySimulation Instance {
        get {
            if (instance == null) {
                instance = FindObjectOfType<NBodySimulation> ();
            }
            return instance;
        }
    }
}