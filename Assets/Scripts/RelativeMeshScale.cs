using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[ExecuteInEditMode]
public class RelativeMeshScale : MonoBehaviour
{
    [SerializeField] Transform meshHolder;
    [SerializeField] float m_sizeRelativeToEarth = 1f;
    [SerializeField] Transform m_earthTransform;
    // Start is called before the first frame update
    void Start()
    {
        if (!meshHolder)
            Debug.LogError("No Mesh Present. Mesh Required for gameObject " + this.gameObject.name);
        if (!m_earthTransform)
            Debug.LogError("No Earth Transform Present. Mesh Required for gameObject " + this.gameObject.name);
        
    }

    // Update is called once per frame
    void Update()
    {
        if (!meshHolder || !m_earthTransform || m_sizeRelativeToEarth == 0)
            return;
        meshHolder.localScale = m_earthTransform.localScale * m_sizeRelativeToEarth;
    }
}
