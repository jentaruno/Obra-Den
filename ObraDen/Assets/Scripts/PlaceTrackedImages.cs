using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARTrackedImageManager))]
public class PlaceTrackedImages : MonoBehaviour
{
    private ARTrackedImageManager _trackedImagesManager;
    public GameObject PhotoObject;
    public GameObject TextObject;
    public AudioSource WatchSound;
    public Texture[] CrewPhotos;
    private readonly Dictionary<string, GameObject> _instantiatedPrefabs = new Dictionary<string, GameObject>();
    private readonly Dictionary<string, string> _cardDialogs = new Dictionary<string, string>(){
        {"Death0Sarah", "(X)\tOh, Christ!\n\t* loud falling material *"},
        {"Death1Darius", "(X)\tHave to get out of here... New diver... Cannot be trusted... \n(X)\tCaptain... Where are you?"},
        {"Death2Charlie", "(X)\tHe speaks to me like I'm incapable of doing anything. \n( )\tWell, look who's here with me now. \n( )\tNo... Don't touch the chest! \n\t*electricity sounds*"},
        {"Death3Maya", "( )\tSaviours of the sea... Please give me protection."}
    };

    void Awake()
    {
        _trackedImagesManager = GetComponent<ARTrackedImageManager>();
    }

    void OnEnable() {
        _trackedImagesManager.trackedImagesChanged += OnTrackedImagesChanged;
    }

    void OnDisable() {
        _trackedImagesManager.trackedImagesChanged -= OnTrackedImagesChanged;
    }

    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs) {
        foreach (var trackedImage in eventArgs.added) {
            var imageName = trackedImage.referenceImage.name;
            if (!_instantiatedPrefabs.ContainsKey(imageName)) {
                    var newPrefab = Instantiate(TextObject, trackedImage.transform);
                    _instantiatedPrefabs[imageName] = newPrefab;
                    // set text
                    TextScrolling textObj = newPrefab.GetComponentInChildren<TextScrolling>();
                    textObj.textToDisplay = _cardDialogs[imageName];
                    // set photo
                    GameObject imgObj = newPrefab.transform.GetChild(1).gameObject;
                    Renderer quadRenderer = imgObj.GetComponent<Renderer>();
                    Material newMaterial = new Material(Shader.Find("Standard"));
                    newMaterial.mainTexture = CrewPhotos[Int32.Parse(imageName.Substring(5,1))];
                    quadRenderer.material = newMaterial;
                    // set active, set pref to unblur, play watch sound
                    newPrefab.SetActive(true);
                    PlayerPrefs.SetInt(imageName, 1);
                    WatchSound.Play();
                }
        }

        foreach (var trackedImage in eventArgs.updated) {
            _instantiatedPrefabs[trackedImage.referenceImage.name]
                .SetActive(trackedImage.trackingState == TrackingState.Tracking);
        }

        foreach (var trackedImage in eventArgs.removed) {
            Destroy(_instantiatedPrefabs[trackedImage.referenceImage.name]);
            _instantiatedPrefabs.Remove(trackedImage.referenceImage.name);
        }
    }
}
