using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIControl : MonoBehaviour
{

    [SerializeField] public Button m_minimizeUiButton;
    [SerializeField] public Button m_maximizeUiButton;
    [SerializeField] public Button m_createPlanetaryObjectUiButton;
    [SerializeField] public Button m_validate;
    [SerializeField] public Button m_playButton;
    [SerializeField] public Button m_pauseButton;
    [SerializeField] public Button m_fastForwardButton;
    [SerializeField] public Button m_normalSpeedButton;

    [SerializeField] public GameObject m_maximizedPanel;
    [SerializeField] public GameObject m_minimizedPanel;
    [SerializeField] public GameObject m_creationPlanetaryObjectPanel;

    [SerializeField] public GameObject m_planetaryObjectPrefab;

    [SerializeField] public OrbitDebugDisplay m_orbitDebugDisplay;

    [SerializeField] public AudioClip play;
    [SerializeField] public AudioClip pause;
    [SerializeField] public AudioClip stop;
    [SerializeField] public AudioClip blackHole;

    private Sun m_sun;
    // Start is called before the first frame update

    void Start()
    {
        
    }

    public void Rewind()
    {
        m_orbitDebugDisplay.Rewind();
    }

    public void NormalSpeed()
    {
        m_fastForwardButton.gameObject.SetActive(true);
        m_normalSpeedButton.gameObject.SetActive(false);
        m_orbitDebugDisplay.NormalSpeed();
    }
    public void FastForward()
    {
        m_fastForwardButton.gameObject.SetActive(false);
        m_normalSpeedButton.gameObject.SetActive(true);
        m_orbitDebugDisplay.FastForward();
    }
    public void PauseApplication()
    {
        m_pauseButton.gameObject.SetActive(false);
        m_playButton.gameObject.SetActive(true);
        m_orbitDebugDisplay.Pause();
        AudioSource.PlayClipAtPoint(pause, transform.position);
    }

    public void StopApplication()
    {
        m_pauseButton.gameObject.SetActive(false);
        m_playButton.gameObject.SetActive(true);
        m_fastForwardButton.gameObject.SetActive(true);
        m_normalSpeedButton.gameObject.SetActive(false);
        m_orbitDebugDisplay.Stop();
        AudioSource.PlayClipAtPoint(stop, transform.position);
    }

    public void PlayApplication()
    {
        m_playButton.gameObject.SetActive(false);
        m_pauseButton.gameObject.SetActive(true);
        m_orbitDebugDisplay.Play();
        AudioSource.PlayClipAtPoint(play, transform.position);
    }

    public void SetSunToBlackHole()
    {
        if (m_orbitDebugDisplay.centralBody) {
            m_orbitDebugDisplay.SetSunToBlackHole();
            m_orbitDebugDisplay.centralBody.surfaceGravity = 100;
            AudioSource.PlayClipAtPoint(blackHole, transform.position);
        }
        
    }
    public void MaximizePanel()
    {
        m_maximizedPanel.SetActive(true);
        m_minimizedPanel.SetActive(false);
    }
    public void MinimizePanel()
    {
        m_minimizedPanel.SetActive(true);
        m_maximizedPanel.SetActive(false);
    }

    public void OpenCreationPlanetaryPanel()
    {
        m_creationPlanetaryObjectPanel.SetActive(true);
        m_minimizedPanel.SetActive(false);
        m_maximizedPanel.SetActive(false);

    }
    public void CloseCreationPlanetaryPanel()
    {
        m_creationPlanetaryObjectPanel.SetActive(false);
        m_maximizedPanel.SetActive(true);
    }

    public void ValidatePlanetaryObject()
    {
        CreateNewPlanetaryObject();
    }

    public void CreateNewPlanetaryObject()
    {
        GameObject newPlanetaryObject = GameObject.Instantiate(m_planetaryObjectPrefab, this.transform);
        newPlanetaryObject.transform.localPosition = new Vector3(2, 2, 2);
        CelestialBody celestialBody = newPlanetaryObject.GetComponent<CelestialBody>();
        celestialBody.radius = 10f;
        celestialBody.surfaceGravity = 0.1f;
        celestialBody.initialVelocity = new Vector3(0.2f, 0.2f, 0.2f);
        NBodySimulation bodySimulation = GetComponent<NBodySimulation>();
        celestialBody.m_orbit = bodySimulation.m_orbit;
        bodySimulation.m_orbit.m_body.Add(celestialBody);
    }

    // Update is called once per frame
    void Update()
    {
        if (!m_sun)
        {
            m_sun = FindObjectOfType<Sun>();
            if (m_sun && !m_minimizedPanel.activeSelf)
                m_minimizedPanel.SetActive(true);
        }
        if  (m_minimizedPanel.activeSelf && FindObjectOfType<Sun>() == null)
        {
            m_minimizedPanel.SetActive(false);
        }
    }
}
