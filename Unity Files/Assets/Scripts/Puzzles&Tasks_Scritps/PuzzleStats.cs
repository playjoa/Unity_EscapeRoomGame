public class PuzzleStats
{
    private ITask[] puzzleTasks;

    public PuzzleStats(ITask[] puzzleTasks)
    {
        this.puzzleTasks = puzzleTasks;
    }

    public string PuzzleStatus()
    {
        if (AreTasksComplete())
            return "100%!";

        return PorcentagemTasksComplete();
    }

    public bool AreTasksComplete()
    {
        bool result = true;

        foreach (ITask currentTask in puzzleTasks)
        {
            if (!currentTask.isTaskComplete)
            {
                result = false;
                break;
            }
        }

        return result;
    }

    public UI_Colors CurrentStatsColor()
    {
        if (AreTasksComplete())
            return UI_Colors.ColorComplete;

        return UI_Colors.ColorIncomplete;
    }

    public int NumTasksComplete()
    {
        int completeTasks = 0;

        foreach (ITask currentTask in puzzleTasks)
        {
            if (currentTask.isTaskComplete)
                completeTasks++;
        }

        return completeTasks;
    }

    string PorcentagemTasksComplete()
    {
        int totalTasks = puzzleTasks.Length;
        int completeTasks = 0;

        foreach (ITask currentTask in puzzleTasks)
        {
            if (currentTask == null)
                return "No Tasks Found!";

            if (currentTask.isTaskComplete)
                completeTasks++;
        }

        float result = ((float)completeTasks / totalTasks) * 100f;

        return result.ToString("0.00") + " %";
    }
}