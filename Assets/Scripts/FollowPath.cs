using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPath : MonoBehaviour
{
    private List<Node> pathToFollow;
    public float speed = 5;
    private int targetIndex = 0;
    [HideInInspector]
    public bool followPath = false;
    public Transform pathObject;


    void Update()
    {
        if (followPath)
        {
            GetComponentInChildren<Animator>().SetBool("startWalking", true);
            FollowThePath();
        }
    }


    public void GetPath(List<Node> path)
    {
        for (int i = 0; i < pathObject.childCount; i++)
        {
            pathObject.GetChild(i).position = pathObject.position;
        }

        pathToFollow = path;

        for (int i = 0; i < path.Count; i++)
        {
            pathObject.GetChild(i).position = path[i].worldPosition;
        }
    }

    void FollowThePath()
    {
        Time.timeScale = 1;

        if (targetIndex <= pathToFollow.Count-1)
        {
            if (transform.position != pathToFollow[targetIndex].worldPosition)
            {
                transform.transform.position = Vector3.MoveTowards(transform.position, pathToFollow[targetIndex].worldPosition, speed * Time.deltaTime);
                Vector3 direction = (pathToFollow[targetIndex].worldPosition - transform.position).normalized;
                Quaternion lookRotation = Quaternion.LookRotation(direction);
                transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * speed);
            }
            else
            {
                pathObject.GetChild(targetIndex).position = pathObject.position;
                targetIndex++;
            }
        }
        else
        {
            targetIndex = 0;
            followPath = false;
            GetComponent<HUD>().IdleMenu.SetActive(true);
            //GetComponent<HUD>().stopTime = true;
            GetComponentInChildren<Animator>().SetBool("startWalking", false);

            if (GetComponent<HUD>().stopTime == true)
            {
                Time.timeScale = 0;
                GetComponent<HUD>().timeButton.text = "Resume time";
            }
            else
            {
                Time.timeScale = 1;
                GetComponent<HUD>().timeButton.text = "Stop time";
            }
        }

    }

}
