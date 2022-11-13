using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StateMachine : MonoBehaviour
{
    [HideInInspector]
    public enum State
    {
        STATE_IDLE,
        STATE_PATROL,
        STATE_SEEK,
        STATE_DISTRACTED,
        STATE_CAUGHT
    };

    [HideInInspector]
    public State currentState;

    public GameObject AI;
    Steering steeringScript;
    Search searchScript;
    GameOver gameOverScript;

    void Start()
    {
        steeringScript = AI.GetComponent<Steering>();
        searchScript = AI.GetComponent<Search>();
        gameOverScript = GetComponent<GameOver>();
        currentState = State.STATE_PATROL;
    }

    void Update()
    {
        switch (currentState)
        {
            case State.STATE_IDLE:
                {
                    AI.GetComponent<Animator>().SetBool("idle", true);
                    Debug.Log("IDLE");
                    break;
                }
            case State.STATE_PATROL:
                {
                    AI.GetComponent<Animator>().SetBool("idle", false);
                    steeringScript.Patrol();
                    searchScript.SearchForPlayer();
                    Debug.Log("PATROLING");
                    break;
                }
            case State.STATE_SEEK:
                {
                    steeringScript.Seek();
                    Time.timeScale = 1;
                    Debug.Log("SEEKING");
                    break;
                }
            case State.STATE_DISTRACTED:
                {
                    steeringScript.CheckDistraction();
                    Debug.Log("DISTRACTED");
                    break;
                }
            case State.STATE_CAUGHT:
                {
                    gameOverScript.InitializeSequence();
                    Time.timeScale = 1;
                    Debug.Log("CAUGHT");
                    break;
                }
        }
    }
}
