using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BackgroundMusic : MonoBehaviour
{
    public AudioClip themeClip;
    public AudioClip creditsClip;

    private static BackgroundMusic instance;
    private AudioSource audioSource;

    private void Awake() {
        if (instance == null) {
            instance = this;
            DontDestroyOnLoad(gameObject);
        } else {
            Destroy(gameObject);
        }
        
        audioSource = GetComponent<AudioSource>();
        SceneManager.sceneLoaded += OnSceneLoaded; 
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (audioSource != null) {
            if (scene.buildIndex == 3) {
                audioSource.clip = creditsClip;
                audioSource.Play();
            }
            else if (audioSource.clip != themeClip || !audioSource.isPlaying) {
                audioSource.clip = themeClip;
                audioSource.Play();
            }
        }
    }
}