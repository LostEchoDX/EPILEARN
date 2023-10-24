using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanetaryRotation : MonoBehaviour
{
    [SerializeField] float m_inclinaisonAxe = 360f;
    [SerializeField] float m_timeForFullRotation = 365f;
    [SerializeField] Transform m_transform;
    [SerializeField] Vector3 m_eulers = Vector3.up;
    // Start is called before the first frame update
    void Awake()
    {
        m_transform = GetComponent<Transform>();
    }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
        m_transform.Rotate(m_eulers);
    }
}
