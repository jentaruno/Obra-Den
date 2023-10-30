using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GenerateBookCrew : MonoBehaviour
{
    struct CrewBlock {
        public bool blurred;
        public Texture photo;
        public string name;
        public string fate;
        public string correctName;
        public string correctFate;
        public GameObject nameButton;
        public GameObject fateButton;
    }
    // TODO: make these the blurred photos
    // TODO: make each prefab's contents depend on crewBlocks and update when
    //       crewBlocks is updated
    private CrewBlock[] crewBlocks = new CrewBlock[]{
        new CrewBlock {
            blurred = true,
            photo = null,
            name = "This unknown soul",
            fate = "met an unknown fate",
            correctName = "Sarah",
            correctFate = "was crushed",
            nameButton = null,
            fateButton = null,
        },
        new CrewBlock {
            blurred = true,
            photo = null,
            name = "This unknown soul",
            fate = "met an unknown fate",
            correctName = "Darius",
            correctFate = "was strangled",
            nameButton = null,
            fateButton = null,
        },
        new CrewBlock {
            blurred = true,
            photo = null,
            name = "This unknown soul",
            fate = "met an unknown fate",
            correctName = "Charlie",
            correctFate = "was electrocuted",
            nameButton = null,
            fateButton = null,
        },
        new CrewBlock {
            blurred = true,
            photo = null,
            name = "This unknown soul",
            fate = "met an unknown fate",
            correctName = "Maya",
            correctFate = "is alive in UK",
            nameButton = null,
            fateButton = null,
        },
    };
    public Texture[] CrewPhotos;
    public GameObject CrewBlockPrefab;

    void Start()
    {
        // PlayerPrefs.DeleteAll();
        // instantiate crew block prefab with spaced out y positions
        for (int i = 0; i < crewBlocks.Length; i++) {
            GameObject crewBlockPrefab = Instantiate(CrewBlockPrefab, transform);
            crewBlockPrefab.transform.position = transform.position + new Vector3(0, 600 - 400 * i);
            // set its photo (blurred if undiscovered)
            RawImage crewImage = crewBlockPrefab.GetComponentInChildren<RawImage>();
            crewImage.texture = CrewPhotos[i];
            GameObject blurredPhoto = crewBlockPrefab.transform.GetChild(3).gameObject;
            if (PlayerPrefs.GetInt("Death" + i + crewBlocks[i].correctName) != 1) {
                blurredPhoto.SetActive(true);
            } else {
                blurredPhoto.SetActive(false);
            }
            // set its name text
            GameObject nameButton = crewBlockPrefab.transform.GetChild(1).gameObject;
            TextMeshProUGUI crewNameText = nameButton.GetComponentInChildren<TextMeshProUGUI>();
            if (PlayerPrefs.GetString("name"+i) != "") {
                crewNameText.SetText(PlayerPrefs.GetString("name"+i));
            } else {
            crewNameText.SetText(crewBlocks[i].name);
            }
            crewBlocks[i].nameButton = nameButton;
            // set its fate text
            GameObject fateButton = crewBlockPrefab.transform.GetChild(2).gameObject;
            TextMeshProUGUI crewFateText = fateButton.GetComponentInChildren<TextMeshProUGUI>();
            if (PlayerPrefs.GetString("fate"+i) != "") {
                crewFateText.SetText(PlayerPrefs.GetString("fate"+i));
            } else {
                crewFateText.SetText(crewBlocks[i].fate);
            }
            crewBlocks[i].fateButton = fateButton;
        }
    }

    public void CheckAnswers() {
        int corrects = 0;
        for (int i = 0; i < crewBlocks.Length; i++) {
            if (PlayerPrefs.GetString("name"+i) == crewBlocks[i].correctName
                && PlayerPrefs.GetString("fate"+i) == crewBlocks[i].correctFate) {
                corrects++;
            }
        }
        if (corrects == crewBlocks.Length) {
            ChangeScene changeScene = this.gameObject.GetComponent<ChangeScene>();
            changeScene.MoveToScene(3);
        }
    }
}
