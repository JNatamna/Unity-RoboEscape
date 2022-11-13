using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuScript : MonoBehaviour
{
    public GameObject mainButtons;
    public GameObject aboutSection;

    public void StartGame()
    {
        SceneManager.LoadScene(1);
    }

    public void AboutClick()
    {
        mainButtons.SetActive(false);
        aboutSection.SetActive(true);
    }

    public void BackClick()
    {
        mainButtons.SetActive(true);
        aboutSection.SetActive(false);
    }
}
