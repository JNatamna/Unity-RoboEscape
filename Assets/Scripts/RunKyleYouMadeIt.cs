using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RunKyleYouMadeIt : MonoBehaviour
{
    private int wayPointIndex = 0;
    public Transform[] waypoints;
    public Animator anim;

    void Awake()
    {
        anim = anim.GetComponent<Animator>();
    }

    void Update()
    {
        if (wayPointIndex <= waypoints.Length - 1)
        {
            if (transform.transform.position != waypoints[wayPointIndex].position)
            {
                transform.position = Vector3.MoveTowards(transform.transform.position, waypoints[wayPointIndex].position, 3 * Time.deltaTime);
                Vector3 direction = (waypoints[wayPointIndex].position - transform.position).normalized;
                Quaternion lookRotation = Quaternion.LookRotation(direction);
                transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * 3);
            }
            else
            {
                wayPointIndex++;
            }
        }
        if(wayPointIndex == 2)
        {
            StartCoroutine(WaitForTransition());
        }
    }

    IEnumerator WaitForTransition()
    {
        anim.SetBool("startTransition", true);
        yield return new WaitForSeconds(3);
        SceneManager.LoadScene(0);

    }
}
