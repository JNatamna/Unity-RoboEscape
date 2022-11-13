using UnityEngine;
using System.Collections;
public class Steering : MonoBehaviour
{

    // Specify the target for the enemy.
    public GameObject target;
    public float speed = 5f;
    public LayerMask mask;
    private bool foundSomething = false;
    public float maxDistance = 2;

    public Transform[] waypoints;
    [SerializeField]
    public Transform distractionWaypoint;
    [SerializeField]
    public GameObject trigger;

    private int waypointIndex = 0;
    private int randomWaypointIndex;

    public bool randomPatrol = false;

    private StateMachine stateMachine;

    void Start()
    {
        randomWaypointIndex = Random.Range(0, waypoints.Length);
        stateMachine = GetComponentInChildren<StateMachine>();
    }

    public void Patrol()
    {
        if (!randomPatrol)
        {
            if (waypointIndex <= waypoints.Length - 1)
            {
                if (transform.transform.position != waypoints[waypointIndex].position)
                {
                    transform.position = Vector3.MoveTowards(transform.transform.position, waypoints[waypointIndex].position, speed * Time.deltaTime);
                    Vector3 direction = (waypoints[waypointIndex].position - transform.position).normalized;
                    Quaternion lookRotation = Quaternion.LookRotation(direction);
                    transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * speed);
                }
                else
                {
                    waypointIndex++;
                }
            }
            else
            {
                waypointIndex = 0;
            }
        }

        if (randomPatrol)
        {
            if (transform.transform.position != waypoints[randomWaypointIndex].position)
            {
                transform.position = Vector3.MoveTowards(transform.transform.position, waypoints[randomWaypointIndex].position, speed * Time.deltaTime);
                Vector3 direction = (waypoints[randomWaypointIndex].position - transform.position).normalized;
                Quaternion lookRotation = Quaternion.LookRotation(direction);
                transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * speed);
            }
            else
            {
                randomWaypointIndex = Random.Range(0, waypoints.Length);
            }
        }
    }

    public void Seek()
    {
        //Angle to shoot rays
        Vector3 angleMin15Deg = Quaternion.AngleAxis(-15, new Vector3(0, 1, 0)) * transform.forward;
        Vector3 anglePos15Deg = Quaternion.AngleAxis(15, new Vector3(0, 1, 0)) * transform.forward;

        //Rays
        Ray ray = new Ray(transform.position, transform.forward);
        Ray leftRay = new Ray(transform.position, angleMin15Deg);
        Ray rightRay = new Ray(transform.position, anglePos15Deg);
        Ray rightBackRay = new Ray(transform.position - (transform.forward), transform.right);
        Ray leftBackRay = new Ray(transform.position - (transform.forward), -transform.right);

        RaycastHit hitInfo;

        bool frontRayHit = false;

        if (!foundSomething)
        {
            Vector3 relativePos = target.transform.position - transform.position;
            Quaternion rotation = Quaternion.LookRotation(relativePos);
            transform.rotation = Quaternion.Slerp(transform.rotation, rotation, Time.deltaTime * 4);
        }

        transform.Translate(Vector3.forward * Time.deltaTime * 4);

        if (Physics.Raycast(ray, out hitInfo, 2))
        {
            if (hitInfo.collider.tag == "Player")
            {
                Debug.DrawLine(ray.origin, hitInfo.point, Color.green);
                Debug.Log("Player has been caught!");
                stateMachine.currentState = StateMachine.State.STATE_CAUGHT;
            }
        }
        else
        {
            if (Physics.Raycast(rightRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore) ||
            Physics.Raycast(leftRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore))
            {
                frontRayHit = true;
                foundSomething = true;
            }
            else
            {
                frontRayHit = false;
                foundSomething = false;
            }
        }

        if (Physics.Raycast(rightRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore) &&
        Physics.Raycast(leftRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore))
        {
            if (Physics.Raycast(rightRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore))
            {
                Debug.DrawLine(rightRay.origin, hitInfo.point, Color.green);
                foundSomething = true;
                transform.Rotate(Vector3.down * Time.deltaTime * 80);
            }
        }
        else
        {
            if (Physics.Raycast(rightRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore))
            {
                Debug.DrawLine(rightRay.origin, hitInfo.point, Color.green);
                foundSomething = true;
                transform.Rotate(Vector3.down * Time.deltaTime * 80);
            }
            else
            {
                Debug.DrawLine(rightRay.origin, rightRay.origin + rightRay.direction * maxDistance, Color.red);
            }

            if (Physics.Raycast(leftRay, out hitInfo, maxDistance, mask, QueryTriggerInteraction.Ignore))
            {
                Debug.DrawLine(leftRay.origin, hitInfo.point, Color.green); ;
                foundSomething = true;
                transform.Rotate(Vector3.up * Time.deltaTime * 80);
            }
            else
            {
                Debug.DrawLine(leftRay.origin, leftRay.origin + leftRay.direction * maxDistance, Color.red);
            }
        }


        if (!frontRayHit)
        {
            if (Physics.Raycast(rightBackRay, out hitInfo, 2, mask, QueryTriggerInteraction.Ignore)||
                (Physics.Raycast(leftBackRay, out hitInfo, 2, mask, QueryTriggerInteraction.Ignore)))
            {
                foundSomething = false;
                Debug.DrawLine(rightBackRay.origin, hitInfo.point, Color.green);
                Debug.DrawLine(leftBackRay.origin, hitInfo.point, Color.green);
            }
            else
            {
                Debug.DrawLine(rightBackRay.origin, rightBackRay.origin + rightBackRay.direction * 2, Color.red);
                Debug.DrawLine(leftBackRay.origin, leftBackRay.origin + leftBackRay.direction * 2, Color.red);
            }
        }
    }
    public void CheckDistraction()
    {
        if (transform.transform.position != distractionWaypoint.position)
        {
            transform.position = Vector3.MoveTowards(transform.transform.position, distractionWaypoint.position, speed * Time.deltaTime);
            Vector3 direction = (distractionWaypoint.position - transform.position).normalized;
            Quaternion lookRotation = Quaternion.LookRotation(direction);
            transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * speed);
        }
        else
        {
            StartCoroutine(Distracted());
        }
    }

    IEnumerator Distracted()
    {
        stateMachine.currentState = StateMachine.State.STATE_IDLE;
        speed = 0;
        yield return new WaitForSeconds(5);
        stateMachine.currentState = StateMachine.State.STATE_PATROL;
        speed = 2;
        trigger.GetComponent<Collider>().enabled = true;
        trigger.transform.GetChild(0).gameObject.SetActive(false);
        trigger.transform.GetChild(1).gameObject.SetActive(false);
    }
}
