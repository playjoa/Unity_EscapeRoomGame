using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameInitializer : MonoBehaviour
{
    [SerializeField]
    private GameManager refGameManager;

    private void Start()
    {
        if (refGameManager == null)
            refGameManager = FindObjectOfType<GameManager>();

        InitializeGame();
    }

    void InitializeGame()
    {
        if (HasSeenTutorial())
        {
            GameState.SwitchToPlayingFPS();
            refGameManager.StartCounter();
            return;
        }

        ShowTutorial();
    }
   
    public void CloseTutorial()
    {
        InitializeGame();
    }

    void ShowTutorial()
    {
        GameState.SwitchToTutorial();
        ValidateSeenTutorial();
    }

    bool HasSeenTutorial()
    {
        if (PlayerPrefs.GetInt("tutorialSeen") == 0)
            return false;

        return true;
    }

    void ValidateSeenTutorial()
    {
        PlayerPrefs.SetInt("tutorialSeen", 1);
    }
}
