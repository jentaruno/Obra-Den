using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class PageScroll : MonoBehaviour, IDragHandler, IEndDragHandler
{
    private Vector3 panelLocation;

    // Start is called before the first frame update
    void Start()
    {
        panelLocation = transform.position;
    }
    public void OnDrag(PointerEventData data) {
        float difference = data.pressPosition.y - data.position.y;
        transform.position = panelLocation - new Vector3(0, difference, 0);
    }
    public void OnEndDrag(PointerEventData data) {
        panelLocation = transform.position;
    }
}