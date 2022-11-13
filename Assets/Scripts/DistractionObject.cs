using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DistractionObject : MonoBehaviour
{
    public GameObject button;


    void OnTriggerStay(Collider other)
    {
        button.SetActive(true);
    }

    void OnTriggerExit(Collider other)
    {
        button.SetActive(false);
    }
}
