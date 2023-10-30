using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetPrefs : MonoBehaviour
{
    private static ResetPrefs instance;
    private string[] _characters = {
        "Sarah",
        "Darius",
        "Charlie",
        "Maya"
    };

    private void Awake() {
        if (instance == null) {
            instance = this;
            DontDestroyOnLoad(gameObject);
        } else {
            Destroy(gameObject);
        }
    }

    private void Start() {
        PlayerPrefs.SetInt("menuPage", 0);
        for (int i = 0; i < _characters.Length; i++) {
            PlayerPrefs.SetInt("Death" + i + _characters[i], 0);
            PlayerPrefs.SetString("name" + i, "This unknown soul");
            PlayerPrefs.SetString("fate" + i, "met an unknown fate");
        }
    }
}
