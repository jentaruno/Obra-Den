using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.SceneManagement;

public class ResetSession : MonoBehaviour
{
    public void goToARScene(int sceneID) {
        LoaderUtility.Initialize();
        SceneManager.LoadScene(sceneID, LoadSceneMode.Single);
    }

    public void goToNonARScene(int sceneID) {
        SceneManager.LoadScene(sceneID, LoadSceneMode.Single);
        LoaderUtility.Deinitialize();
    }
}
