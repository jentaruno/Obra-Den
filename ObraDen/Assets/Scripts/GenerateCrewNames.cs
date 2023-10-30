using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GenerateCrewNames : MonoBehaviour
{
    struct CrewNameData {
        public string name;
        public string role;
        public GameObject button;
    }
    public bool IsNamesBox;
    private TextMeshProUGUI _callerText;
    private int _callerIndex;
    public GameObject CrewNamePrefab;
    private CrewNameData[] crewNameDataArr = new CrewNameData[]{
        new CrewNameData { name = "Sarah", role = "Captain", button = null },
        new CrewNameData { name = "Maya", role = "Archaeologist", button = null },
        new CrewNameData { name = "Darius", role = "Diver", button = null },
        new CrewNameData { name = "Charlie", role = "Diver", button = null },
    };
    private CrewNameData[] fateDataArr = new CrewNameData[]{
        new CrewNameData { name = "Alive", role = "Brazil", button = null },
        new CrewNameData { name = "Alive", role = "Russia", button = null },
        new CrewNameData { name = "Alive", role = "Japan", button = null },
        new CrewNameData { name = "Alive", role = "Indonesia", button = null },
        new CrewNameData { name = "Alive", role = "UK", button = null },
        new CrewNameData { name = "Alive", role = "USA", button = null },
        new CrewNameData { name = "Burned", role = "", button = null },
        new CrewNameData { name = "Clawed", role = "", button = null },
        new CrewNameData { name = "Clubbed", role = "", button = null },
        new CrewNameData { name = "Crushed", role = "", button = null },
        new CrewNameData { name = "Drowned", role = "", button = null },
        new CrewNameData { name = "Electrocuted", role = "", button = null },
        new CrewNameData { name = "Knifed", role = "", button = null },
        new CrewNameData { name = "Shot", role = "", button = null },
        new CrewNameData { name = "Spiked", role = "", button = null },
        new CrewNameData { name = "Strangled", role = "", button = null },
        new CrewNameData { name = "Struck", role = "", button = null },
        new CrewNameData { name = "Torn apart", role = "", button = null },
    };

    void OnEnable()
    {
        // Create buttons in the crew names box
        CrewNameData[] arr = IsNamesBox ? crewNameDataArr : fateDataArr;
        for (int i = 0; i < arr.Length; i++) {
            // instantiate crew name prefab with spaced out y positions
            GameObject crewNameObject = Instantiate(CrewNamePrefab, transform);
            Transform crewNameDataTransform = crewNameObject.transform;
            crewNameDataTransform.position = transform.position + new Vector3(0, 135 - 100 * i, 0);
            // set its text
            TextMeshProUGUI crewNameText = crewNameObject.GetComponentInChildren<TextMeshProUGUI>();
            string tabsForName = arr[i].name.Length > 5 ? "\t" : "\t\t";
            crewNameText.SetText((i+1) + "\t" + arr[i].name + tabsForName + arr[i].role);
            // set text that it will write on the book when clicked
            SetBookText setBookText = crewNameObject.GetComponent<SetBookText>();
            setBookText.TextToDisplay = arr[i].name;
            if (!IsNamesBox) {
                if (arr[i].name == "Alive") {
                    setBookText.TextToDisplay = "is " + setBookText.TextToDisplay.ToLower() + " in " + arr[i].role;
                } else {
                    setBookText.TextToDisplay = "was " + setBookText.TextToDisplay.ToLower();
                }
            }
            // set target text (object that called it on book) and its index
            setBookText.TargetText = _callerText;
            setBookText.IsSettingName = IsNamesBox;
            setBookText.PlayerPrefIndex = _callerIndex;
            arr[i].button = crewNameObject;
        }
    }

    public void SetTargetText(GameObject TargetText) {
        _callerText = TargetText.GetComponentInChildren<TextMeshProUGUI>();
        _callerIndex = TargetText.transform.parent.transform.GetSiblingIndex();
    }

    public void OnClose() {
        CrewNameData[] arr = IsNamesBox ? crewNameDataArr : fateDataArr;
        for (int i = 0; i < arr.Length; i++) {
            Destroy(arr[i].button);
            arr[i].button = null;
        }
    }
}
