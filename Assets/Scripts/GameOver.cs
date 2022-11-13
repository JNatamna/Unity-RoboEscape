using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOver : MonoBehaviour
{
    public GameObject player;
    public GameObject fakePlayer;
    public Animator animator;
    public GameObject animCamera;
    public GameObject defaultCamera;
    public GameObject buttons;

    void Start()
    {
        animator = animator.GetComponent<Animator>();
    }

    public void InitializeSequence()
    {
        buttons.SetActive(false);
        player.SetActive(false);
        fakePlayer.SetActive(true);
        animCamera.SetActive(true);
        defaultCamera.SetActive(false);
        animator.SetBool("playerCaught", true);

        StartCoroutine(ChangeScene());
    }

    IEnumerator ChangeScene()
    {
        yield return new WaitForSeconds(5);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
