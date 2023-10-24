using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlanetaryMovement : MonoBehaviour
{

    [SerializeField] float a;
    [SerializeField] float b;
    [SerializeField] float e;
    [SerializeField] float x;
    [SerializeField] float y;
    [SerializeField] float r;
    [SerializeField] float planetaryMass;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void CalculateOrbit()
    {
        float result = 0;
        b = a / (Mathf.Pow(e, 2) - 1);
        b = Mathf.Abs(b);
        x = a + r * Mathf.Cos(2);
        result = Mathf.Pow(x + Mathf.Abs(b), 2) / (e * Mathf.Pow(Mathf.Abs(b), 2)) - (Mathf.Pow(y, 2) / (a * Mathf.Abs(b) * Mathf.Pow(e, 2))) - 1;
    }
}
