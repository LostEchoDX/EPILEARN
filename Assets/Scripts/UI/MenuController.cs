using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace UI
{
    public class MenuController : MonoBehaviour
    {
       // Start is called before the first frame update
        void Start()
        {

        }

        // Update is called once per frame
        void Update()
        {

        }

        public void LoadSolarSystemScene()
        {
            Debug.Log("Scenes :" + SceneManager.sceneCount);
            Debug.Log(SceneManager.GetSceneByName("BlankAR").buildIndex);
            SceneManager.LoadScene("CoolStuff");
        }
    }
}

