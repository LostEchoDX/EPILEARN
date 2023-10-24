using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sun : MonoBehaviour
{

    [SerializeField] private GameObject m_meshHolder;
    [SerializeField] private GameObject m_blackHoleHolder;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ChangeToBlackHole()
    {
        m_meshHolder.SetActive(false);
        m_blackHoleHolder.SetActive(true);
    }
}
