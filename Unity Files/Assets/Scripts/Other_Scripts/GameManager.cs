using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField]
    private float timeLimit = 900;

    [SerializeField]
    private FeedbackPuzzleLights feedBackLights;

    private int totalPuzzlesInScene, completedPuzzles = 0;
    private float timeLeft = 0;
    private TimeSpan timeSpan;

    private void Start()
    {
        GetTotalPuzzlesInScene();
    }

    public int TotalPuzzles => totalPuzzlesInScene;

    public void StartCounter()
    {
        timeLeft = timeLimit;
        InvokeRepeating("CountTimer", 0.5f, 1);
    }

    private void OnDisable()
    {
        CancelInvoke();
    }

    void GetTotalPuzzlesInScene()
    {
        totalPuzzlesInScene = FindObjectsOfType<MonoBehaviour>().OfType<IPuzzle>().Count();
    }

    bool CheckIfWon => completedPuzzles >= totalPuzzlesInScene;

    public void PuzzleComplete()
    {
        completedPuzzles++;

        feedBackLights.ToggleLights(completedPuzzles);

        if (CheckIfWon)
            FinishWithSuccess();
    }

    void FinishWithSuccess()
    {
        UI_Manager.Instance.Set_TimerWithColor("Saia da Casa!", UI_Colors.ColorComplete);
        CancelInvoke();
        GameState.SwitchToComplete();
        AvailableGameEvents.Instance.AllPuzzlesComplete?.Invoke();
    }

    void FinishWithFail()
    {
        CancelInvoke();
        GameState.SwitchToGameOver();
    }

    void CountTimer()
    {
        if (GameState.CanCountTimer())
            timeLeft--;
        
        UpdateTimer(timeLeft);

        if (timeLeft <= 0 && !CheckIfWon)
            FinishWithFail();
    }

    string TransformTime(float timer)
    {
        int minutes = Mathf.FloorToInt(timer / 60F);
        int seconds = Mathf.FloorToInt(timer - minutes * 60);
        return string.Format("{0:0}:{1:00}", minutes, seconds);
    }

    void UpdateTimer(float currentTimer)
    {
        timeSpan = TimeSpan.FromSeconds(currentTimer);

        UI_Manager.Instance.Set_Timer(TransformTime(currentTimer));
    }
}
