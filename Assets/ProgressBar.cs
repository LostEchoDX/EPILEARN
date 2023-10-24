using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProgressBar : MonoBehaviour
{
    // Start is called before the first frame update
    private Slider m_slider;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void Awake()
    {
        m_slider = gameObject.GetComponent<Slider>();
    }

    public void SetTimelineToFloat()
    {
        Debug.Log(m_slider.value);
    }
}
