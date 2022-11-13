using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUD : MonoBehaviour
{
    [HideInInspector]
    public bool stopTime = false;

    public Text timeButton;
    public GameObject walkButton;
    public GameObject IdleMenu;

    [SerializeField]
    public GameObject triggerButton;
    [SerializeField]
    public GameObject trigger;
    [SerializeField]
    public GameObject stateManager;


    public void StartWalking()
    {
        GetComponent<FollowPath>().followPath = true;
        walkButton.SetActive(false);
        IdleMenu.SetActive(false);
    }

    public void ActivateDistraction()
    {
        triggerButton.SetActive(false);
        trigger.GetComponent<Collider>().enabled = false;
        trigger.transform.GetChild(0).gameObject.SetActive(true);
        trigger.transform.GetChild(1).gameObject.SetActive(true);
        stateManager.GetComponent<StateMachine>().currentState = StateMachine.State.STATE_DISTRACTED;
    }

    public void ResumeOrStopTime()
    {
        stopTime = !stopTime;

        if (stopTime)
        {
            Time.timeScale = 0;
            timeButton.text = "Resume time";
        }
        else
        {
            Time.timeScale = 1;
            timeButton.text = "Stop time";
        }
    }
}
