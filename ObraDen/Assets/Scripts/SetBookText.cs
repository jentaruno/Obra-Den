using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SetBookText : MonoBehaviour
{
    public TextMeshProUGUI TargetText;
    public bool IsSettingName;
    public int PlayerPrefIndex;
    public string TextToDisplay;
    // Start is called before the first frame update
    public void SetTargetText()
    {
        TargetText.SetText(TextToDisplay);
        if (IsSettingName) {
            PlayerPrefs.SetString("name"+PlayerPrefIndex, TextToDisplay);
        } else {
            PlayerPrefs.SetString("fate"+PlayerPrefIndex, TextToDisplay);
        }
    }
}
