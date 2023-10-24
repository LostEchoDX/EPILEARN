using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof (Rigidbody))]
public class CelestialBody : GravityObject {

    public float radius;
    public float surfaceGravity;
    public float initialSurfaceGravity;
    public Vector3 initialVelocity;
    public Vector3 initialPosition;
    public string bodyName = "Unnamed";
    [SerializeField] public OrbitDebugDisplay m_orbit;
    private List<Vector3> positionHolder = new List<Vector3>();
    private List<Vector3> velocityHolder = new List<Vector3>();
    [SerializeField] public GameObject m_ui;

    Transform meshHolder;

    public Vector3 velocity { get; set; }
    public float mass { get; private set; }
    public Rigidbody rb;

    public Vector3 GetPositionAt(int i)
    {
        if (positionHolder.Count == 0)
            return initialPosition;
        if (i <= 0)
            return positionHolder[0];
        return positionHolder[i - 1];
    }

    public Vector3 GetVelocityAt(int i)
    {
        if (velocityHolder.Count == 0)
            return initialVelocity;
        if (i <= 0)
            return velocityHolder[0];
        return velocityHolder[i - 1];
    }


    public int GetPositionCount()
    {
        return positionHolder.Count;
    }

    public void AddCelestialBodyVelo()
    {
        velocityHolder.Add(this.velocity);
    }
    public void AddCelestialBodyPos()
    {
        positionHolder.Add(this.transform.position);
    }
    void Awake ()
    {

        rb = GetComponent<Rigidbody>();
        initialSurfaceGravity = surfaceGravity;
        mass = surfaceGravity * radius * radius / Universe.gravitationalConstant;
        rb.mass = mass;
        velocity = initialVelocity;
        initialPosition = this.transform.localPosition;
        m_orbit = FindObjectOfType<OrbitDebugDisplay>();
        positionHolder.Clear();
        velocityHolder.Clear();
    }

    public void ResetState()
    {
        this.surfaceGravity = initialSurfaceGravity;
        this.transform.localPosition = initialPosition;
        this.velocity = initialVelocity;
        velocityHolder.Clear();
        positionHolder.Clear();
    }

    public void UpdateVelocity (CelestialBody[] allBodies, float timeStep)
    {
        foreach (var otherBody in allBodies) {
            if (otherBody != this) {
                float sqrDst = (otherBody.rb.position - rb.position).sqrMagnitude;
                Vector3 forceDir = (otherBody.rb.position - rb.position).normalized;

                Vector3 acceleration = forceDir * Universe.gravitationalConstant * otherBody.mass / sqrDst;
                velocity += acceleration * timeStep;
            }
        }
    }

    public void UpdateVelocity (Vector3 acceleration, float timeStep)
    {
        velocity += acceleration * timeStep;
    }

    public void UpdatePosition (float timeStep)
    {
        rb.MovePosition ((rb.position + velocity * timeStep));
    }

    public void Update()
    {
        mass = surfaceGravity * radius * radius / Universe.gravitationalConstant;
        rb.mass = mass;
    }

    public Rigidbody Rigidbody
    {
        get {
            return rb;
        }
    }

    public Vector3 Position
    {
        get {
            return rb.position;
        }
    }

    public void ShowDescriptionUI()
    {
        m_ui.SetActive(true);
    }

    public void HideDescriptionUI()
    {
        m_ui.SetActive(false);
    }

    private void OnDestroy()
    {
        m_orbit.DestroyCelestialObject(this);
    }

}