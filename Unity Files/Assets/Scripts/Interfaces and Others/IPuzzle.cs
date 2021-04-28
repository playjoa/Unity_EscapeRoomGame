public interface IPuzzle
{
    bool IsPuzzleComplete { get; }
    void CheckIfPuzzleComplete();
    string PuzzleStatus { get; }
    string PuzzleDesc { get; }
    UI_Colors CurrentStatsColor{ get; }
}
