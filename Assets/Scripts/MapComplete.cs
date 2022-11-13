using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MapComplete : MonoBehaviour
{
    public Animator anim;
    AsyncOperation async;

    void Awake()
    {
        anim = anim.GetComponent<Animator>();
    }

    private void OnTriggerEnter(Collider other)
    {
        Time.timeScale = 1;
        anim.SetBool("startTransition", true);
        async = SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
        async.allowSceneActivation = false;

        StartCoroutine(WaitForTransition());
    }

    IEnumerator WaitForTransition()
    {
        yield return new WaitForSeconds(3);
        async.allowSceneActivation = true;
    }
}
