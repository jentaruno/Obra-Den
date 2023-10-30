using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ChangePage : MonoBehaviour, IDragHandler, IEndDragHandler
{
    private Vector3 panelLocation;
    public float percentThreshold = 0.2f;
    public float easing = 0.5f;
    public RawImage[] indicators;
    private int index = 0;
    // Start is called before the first frame update
    void Start()
    {
        index = PlayerPrefs.GetInt("menuPage");
        DisplayIndicator(index);
        transform.position += new Vector3(index * -Screen.width, 0, 0);
        panelLocation = transform.position;
    }
    public void OnDrag(PointerEventData data) {
        float difference = data.pressPosition.x - data.position.x;
        Vector3 newLocation = panelLocation - new Vector3(difference, 0, 0);
        transform.position = newLocation;
    }
    public void OnEndDrag(PointerEventData data) {
        
        float percentage = (data.pressPosition.x - data.position.x) / Screen.width;
        if (Mathf.Abs(percentage) >= percentThreshold) {
            Vector3 newLocation = panelLocation;
            if (percentage > 0) {
                newLocation += new Vector3(-Screen.width, 0, 0);
                if (newLocation.x < -(Screen.width / 2)) {
                    newLocation = panelLocation;
                } else {
                index++;
                }
            } else if (percentage < 0) {
                newLocation += new Vector3(Screen.width, 0, 0);
                if (newLocation.x > Screen.width / 2) {
                    newLocation = panelLocation;
                } else {
                index--;
                }
            }
            DisplayIndicator(index);
            PlayerPrefs.SetInt("menuPage", index);
            StartCoroutine(SmoothMove(transform.position, newLocation, easing));
            panelLocation = newLocation;
        } else {
            DisplayIndicator(index);
            PlayerPrefs.SetInt("menuPage", index);
            StartCoroutine(SmoothMove(transform.position, panelLocation, easing));
        }
    }
    IEnumerator SmoothMove(Vector3 startpos, Vector3 endpos, float seconds) {
        float t = 0f;
        while (t <= 1.0) {
            t += Time.deltaTime / seconds;
            transform.position = Vector3.Lerp(startpos, endpos, Mathf.SmoothStep(0f, 1f, t));
            yield return null;
        }
    }
    private void DisplayIndicator(int index) {
        for (int i = 0; i < indicators.Length; i++) {
            if (i == index) {
                Color color = indicators[i].color;
                color.a = 1;
                indicators[i].color = color;
            } else {
                Color color = indicators[i].color;
                color.a = 0.5f;
                indicators[i].color = color;
            }
        }
    }
}
