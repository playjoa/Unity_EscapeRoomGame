using UnityEngine;

public class AvailableGameEvents : MonoBehaviour
{
    [SerializeField]
    private GameEvent taskCompleteEvent, puzzleComplete, allPuzzlesCompleteEvent, walkOutSideEvent;

    public static AvailableGameEvents Instance;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(this);
    }

    public GameEvent TaskComplete => taskCompleteEvent;

    public GameEvent PuzzleComplete => puzzleComplete;

    public GameEvent AllPuzzlesComplete => allPuzzlesCompleteEvent;

    public GameEvent WalkOutSide => walkOutSideEvent;
}
