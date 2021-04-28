using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotationPuzzle : MonoBehaviour, InteractableObject, IPuzzle
{
    [SerializeField]
    private RotationTask[] puzzleTasks;

    [SerializeField]
    private FeedbackPuzzleLights feedBackLights;

    [TextArea]
    public string descPuzzle;

    public bool IsPuzzleComplete => puzzleStats.AreTasksComplete();
    public string PuzzleStatus => puzzleStats.PuzzleStatus();
    public string PuzzleDesc => descPuzzle;
    public UI_Colors CurrentStatsColor => puzzleStats.CurrentStatsColor();

    private PuzzleStats puzzleStats;

    private void Awake()
    {
        Initialize();
    }

    void Initialize()
    {
        RotationTask.OnTaskChanged += TaskToggled;
        puzzleStats = new PuzzleStats(puzzleTasks);
    }

    public void Interact()
    {
        if (IsPuzzleComplete)
        {
            Debug.Log("Do stuff after puzzle complete");
        }
    }

    public void ActivateInteractionFeedback()
    {
        UI_Manager.Instance.SetPuzzleDesc(PuzzleStatus, PuzzleDesc, CurrentStatsColor);
    }

    public void DeactivateInteractionFeedback()
    {
        UI_Manager.Instance.DeactivatePuzzleCard();
    }

    public void CheckIfPuzzleComplete()
    {
        if (IsPuzzleComplete)
        {
            AvailableGameEvents.Instance.PuzzleComplete?.Invoke();
        }
    }

    void TaskToggled(ITask taskComplete)
    {
        if (feedBackLights != null)
            feedBackLights.ToggleLights(puzzleStats.NumTasksComplete());

        if (taskComplete.isTaskComplete)
        {
            AvailableGameEvents.Instance.TaskComplete?.Invoke();
            CheckIfPuzzleComplete();
        }
    }
}
