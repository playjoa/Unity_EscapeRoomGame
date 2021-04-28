using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class GoToScene : MonoBehaviour
{
    public void LoadSceneByID(int id)
    {
        SceneManager.LoadScene(id);
    }

    public void LoadSceneByName(string id)
    {
        SceneManager.LoadScene(id);
    }

    public void ReloadCurrentScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}

