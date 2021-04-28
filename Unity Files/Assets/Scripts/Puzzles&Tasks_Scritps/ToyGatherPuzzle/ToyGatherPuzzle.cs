using UnityEngine;

public class ToyGatherPuzzle : MonoBehaviour, InteractableObject, IPuzzle
{
    [SerializeField]
    private ToyGatherTask[] puzzleTasks;

    [SerializeField]
    private Collider targetCollider;

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
        ToyGatherTask.OnTaskToggled += TaskToggled;
        puzzleStats = new PuzzleStats(puzzleTasks);
    }

    void OnDisable()
    {
        ToyGatherTask.OnTaskToggled -= TaskToggled;
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
            Debug.Log("PUZZLE IS COMPLETE!!!");
        }
    }

    public GameObject TargetCollider()
    {
        return targetCollider.gameObject;
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
