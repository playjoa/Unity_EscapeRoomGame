public static class GameState
{
    private static State currentState = State.None;
    private static State previousStateBeforePausing = State.None;

    public static State GetState()
    {
        return currentState;
    }

    static void SetState(State newState)
    {
        PlayerInputs.Instance.ResetJoySticks();

        currentState = newState;
    }

    public static bool CanCountTimer()
    {
        if (currentState == State.PlayingFPS || currentState == State.Interacting)
            return true;

        return false;
    }

    public static bool CanPause()
    {
        if (currentState == State.PlayingFPS || currentState == State.Interacting || currentState == State.Complete)
            return true;

        return false;
    }

    public static bool IsPlayingFPS()
    {
        if (currentState == State.PlayingFPS || currentState == State.Complete)
            return true;

        return false;
    }

    public static bool IsInteracting()
    {
        if (currentState == State.Interacting)
            return true;

        return false;
    }

    public static bool IsComplete()
    {
        if (currentState == State.Complete)
            return true;

        return false;
    }
    public static bool IsTutorial()
    {
        if (currentState == State.Tutorial)
            return true;

        return false;
    }

    public static void SwitchToCutscene()
    {
        UI_Manager.Instance.ToggleUI_Inputs(false);
        UI_Manager.Instance.ToggleCutscene();
        SetState(State.OnCutscene);
    }

    public static void SwitchToGameOver()
    {
        SetState(State.Failed);
        UI_Manager.Instance.ToggleGameOverScreen();
    }

    public static void SwitchToComplete()
    {
        SetState(State.Complete);
    }

    public static void SwitchToPaused()
    {
        previousStateBeforePausing = GetState();
        MouseLocker.FreeMouse();
        UI_Manager.Instance.TogglePauseScreen(true);

        SetState(State.Paused);
    }

    public static void ResumeGame()
    {
        UI_Manager.Instance.TogglePauseScreen(false);

        if(previousStateBeforePausing == State.PlayingFPS)
            MouseLocker.LockMouse();
        
        SetState(previousStateBeforePausing);
    }

    public static void SwitchToTutorial()
    {
        MouseLocker.FreeMouse();
        UI_Manager.Instance.ToggleTutorialScreen();
        SetState(State.Tutorial);
    }

    public static void SwitchToInteracting()
    {
        MouseLocker.FreeMouse();
        SetState(State.Interacting);
    }

    public static void SwitchToPlayingFPS()
    {
        MouseLocker.LockMouse();
        UI_Manager.Instance.ToggleGamePlayScreen();
        SetState(State.PlayingFPS);
    }
}

public enum State 
{
    None,
    Tutorial,
    PlayingFPS, 
    Interacting,
    Paused,
    Complete,
    Failed,
    OnCutscene
}
