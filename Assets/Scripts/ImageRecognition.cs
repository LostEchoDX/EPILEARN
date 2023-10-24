using System;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ImageRecognition : MonoBehaviour
{
    [SerializeField]
    TapToPlace ss;

    [SerializeField]
    [Tooltip("Image manager on the AR Session Origin")]
    ARTrackedImageManager ImageManager;

    [SerializeField]
    [Tooltip("Reference Image Library")]
    XRReferenceImageLibrary ImageLibrary;

    [SerializeField]
    GameObject Sun;

    [SerializeField]
    GameObject Mercury;

    [SerializeField]
    GameObject Venus;

    [SerializeField]
    GameObject Earth;

    [SerializeField]
    GameObject Mars;

    [SerializeField]
    GameObject Jupiter;

    [SerializeField]
    GameObject Saturn;

    [SerializeField]
    GameObject Uranus;

    [SerializeField]
    GameObject Neptune;

    GameObject spawnedSun;
    GameObject spawnedMercury;
    GameObject spawnedVenus;
    GameObject spawnedEarth;
    GameObject spawnedMars;
    GameObject spawnedJupiter;
    GameObject spawnedSaturn;
    GameObject spawnedUranus;
    GameObject spawnedNeptune;

    static Guid sunGuid;
    static Guid mercuryGuid;
    static Guid venusGuid;
    static Guid earthGuid;
    static Guid marsGuid;
    static Guid jupiterGuid;
    static Guid saturnGuid;
    static Guid uranusGuid;
    static Guid neptuneGuid;

    void OnEnable()
    {
        sunGuid = ImageLibrary[0].guid;
        mercuryGuid = ImageLibrary[1].guid;
        venusGuid = ImageLibrary[2].guid;
        earthGuid = ImageLibrary[3].guid;
        marsGuid = ImageLibrary[4].guid;
        jupiterGuid = ImageLibrary[5].guid;
        saturnGuid = ImageLibrary[6].guid;
        uranusGuid = ImageLibrary[7].guid;
        neptuneGuid = ImageLibrary[8].guid;
        
        ImageManager.trackedImagesChanged += ImageManagerOnTrackedImagesChanged;
    }

    void OnDisable()
    {
        ImageManager.trackedImagesChanged -= ImageManagerOnTrackedImagesChanged;
    }

    void ImageManagerOnTrackedImagesChanged(ARTrackedImagesChangedEventArgs obj)
    {
        // added, spawn prefab
        foreach(ARTrackedImage image in obj.added)
        {
            if (image.referenceImage.guid == sunGuid)
            {
                spawnedSun = Instantiate(Sun, image.transform.position, image.transform.rotation);
                ss.RemoveAllReferencePoints();
            }
            else if (image.referenceImage.guid == mercuryGuid)
            {
                spawnedMercury = Instantiate(Mercury, image.transform.position, image.transform.rotation);
                ss.RemoveAllReferencePoints();
            }
            else if (image.referenceImage.guid == venusGuid)
            {
                spawnedVenus = Instantiate(Venus, image.transform.position, image.transform.rotation);
                ss.RemoveAllReferencePoints();
            }
            else if (image.referenceImage.guid == earthGuid)
            {
                spawnedEarth = Instantiate(Earth, image.transform.position, image.transform.rotation);
                ss.RemoveAllReferencePoints();
            }
            else if (image.referenceImage.guid == marsGuid)
            {
                spawnedMars = Instantiate(Mars, image.transform.position, image.transform.rotation);
                ss.RemoveAllReferencePoints();
            }
            else if (image.referenceImage.guid == jupiterGuid)
            {
                spawnedJupiter = Instantiate(Jupiter, image.transform.position, image.transform.rotation);
                ss.RemoveAllReferencePoints();
            }
            else if (image.referenceImage.guid == saturnGuid)
            {
                spawnedSaturn = Instantiate(Saturn, image.transform.position, image.transform.rotation);
                ss.RemoveAllReferencePoints();
            }
            else if (image.referenceImage.guid == uranusGuid)
            {
                spawnedUranus = Instantiate(Uranus, image.transform.position, image.transform.rotation);
                ss.RemoveAllReferencePoints();
            }
            else if (image.referenceImage.guid == neptuneGuid)
            {
                spawnedNeptune = Instantiate(Neptune, image.transform.position, image.transform.rotation);
                ss.RemoveAllReferencePoints();
            }
        }
        
        // updated, set prefab position and rotation
        foreach(ARTrackedImage image in obj.updated)
        {
            // image is tracking or tracking with limited state, show visuals and update it's position and rotation
            if (image.trackingState == TrackingState.Tracking)
            {
                if (image.referenceImage.guid == sunGuid)
                {
                    spawnedSun.SetActive(true);
                    spawnedSun.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
                    ss.RemoveAllReferencePoints();
                }
                else if (image.referenceImage.guid == mercuryGuid)
                {
                    spawnedMercury.SetActive(true);
                    spawnedMercury.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
                    ss.RemoveAllReferencePoints();
                }
                else if (image.referenceImage.guid == venusGuid)
                {
                    spawnedVenus.SetActive(true);
                    spawnedVenus.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
                    ss.RemoveAllReferencePoints();
                }
                else if (image.referenceImage.guid == earthGuid)
                {
                    spawnedEarth.SetActive(true);
                    spawnedEarth.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
                    ss.RemoveAllReferencePoints();
                }
                else if (image.referenceImage.guid == marsGuid)
                {
                    spawnedMars.SetActive(true);
                    spawnedMars.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
                    ss.RemoveAllReferencePoints();
                }
                else if (image.referenceImage.guid == jupiterGuid)
                {
                    spawnedJupiter.SetActive(true);
                    spawnedJupiter.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
                    ss.RemoveAllReferencePoints();
                }
                else if (image.referenceImage.guid == saturnGuid)
                {
                    spawnedSaturn.SetActive(true);
                    spawnedSaturn.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
                    ss.RemoveAllReferencePoints();
                }
                else if (image.referenceImage.guid == uranusGuid)
                {
                    spawnedUranus.SetActive(true);
                    spawnedUranus.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
                    ss.RemoveAllReferencePoints();
                }
                else if (image.referenceImage.guid == neptuneGuid)
                {
                    spawnedNeptune.SetActive(true);
                    spawnedNeptune.transform.SetPositionAndRotation(image.transform.position, image.transform.rotation);
                    ss.RemoveAllReferencePoints();
                }
            }
            // image is no longer tracking, disable visuals TrackingState.Limited TrackingState.None
            else
            {
                if (image.referenceImage.guid == sunGuid)
                {
                    spawnedSun.SetActive(false);
                }
                else if (image.referenceImage.guid == mercuryGuid)
                {
                    spawnedMercury.SetActive(false);
                }
                else if (image.referenceImage.guid == venusGuid)
                {
                    spawnedVenus.SetActive(false);
                }
                else if (image.referenceImage.guid == earthGuid)
                {
                    spawnedEarth.SetActive(false);
                }
                else if (image.referenceImage.guid == marsGuid)
                {
                    spawnedMars.SetActive(false);
                }
                else if (image.referenceImage.guid == jupiterGuid)
                {
                    spawnedJupiter.SetActive(false);
                }
                else if (image.referenceImage.guid == saturnGuid)
                {
                    spawnedSaturn.SetActive(false);
                }
                else if (image.referenceImage.guid == uranusGuid)
                {
                    spawnedUranus.SetActive(false);
                }
                else if (image.referenceImage.guid == neptuneGuid)
                {
                    spawnedNeptune.SetActive(false);
                }
            }
        }

        // removed, destroy spawned instance
        foreach(ARTrackedImage image in obj.removed)
        {
            if (image.referenceImage.guid == sunGuid)
            {
                Destroy(spawnedSun);
            }
            else if (image.referenceImage.guid == mercuryGuid)
            {
                Destroy(spawnedMercury);
            }
            else if (image.referenceImage.guid == venusGuid)
                {
                    Destroy(spawnedVenus);
                }
                else if (image.referenceImage.guid == earthGuid)
                {
                    Destroy(spawnedEarth);
                }
                else if (image.referenceImage.guid == marsGuid)
                {
                    Destroy(spawnedMars);
                }
                else if (image.referenceImage.guid == jupiterGuid)
                {
                    Destroy(spawnedJupiter);
                }
                else if (image.referenceImage.guid == saturnGuid)
                {
                    Destroy(spawnedSaturn);
                }
                else if (image.referenceImage.guid == uranusGuid)
                {
                    Destroy(spawnedUranus);
                }
                else if (image.referenceImage.guid == neptuneGuid)
                {
                    Destroy(spawnedNeptune);
                }
        }
    }
}