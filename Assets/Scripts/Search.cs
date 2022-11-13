using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Search : MonoBehaviour
{
    public float rays = 20;
    public float maxDistance = 12;
    public float angle = 20;

    public GameObject goalTrigger;

    private StateMachine stateMachine;

    public LayerMask mask;

    void Awake()
    {
        stateMachine = GetComponentInChildren<StateMachine>();
    }

    public void SearchForPlayer()
    {
        for (int i = 0; i < rays; i++)
        {
            Quaternion rotation = this.transform.rotation;
            Quaternion rotationMod = Quaternion.AngleAxis((i / rays) * angle * 2 - angle, transform.up);
            Vector3 direction = rotation * rotationMod * Vector3.forward;

            Ray ray = new Ray(transform.position, direction);
            RaycastHit hitInfo;

            if (Physics.Raycast(ray, out hitInfo, maxDistance))
            {
                if (hitInfo.collider.tag == "Player")
                {
                    Debug.DrawLine(ray.origin, hitInfo.point, Color.green);
                    GetComponent<Animator>().SetBool("startRunning", true);
                    goalTrigger.SetActive(false);
                    stateMachine.currentState = StateMachine.State.STATE_SEEK;
                }
            }
            else
            {
                Debug.DrawLine(ray.origin, ray.origin + ray.direction * maxDistance, Color.red);
            }
        }
    }
}
