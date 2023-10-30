using UnityEngine;
using System.Collections;
using TMPro;

public class TextScrolling : MonoBehaviour
{
    public string textToDisplay = "";
    public TextMeshPro text;
    private int _currentCharIndex = 0;

    private void OnEnable()
    {
        StartCoroutine(DisplayText());
    }

    private void OnDisable() {
        _currentCharIndex = 0;
        text.SetText("");
    }

    private IEnumerator DisplayText()
    {
        string textSoFar = "";
        text.SetText(textSoFar);
        while (_currentCharIndex < textToDisplay.Length)
        {
            textSoFar += textToDisplay[_currentCharIndex];
            text.SetText(textSoFar);
            _currentCharIndex++;
            yield return new WaitForSeconds(0.1f);
        }
    }
}