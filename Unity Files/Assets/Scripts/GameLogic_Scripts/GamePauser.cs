using UnityEngine;

public class GamePauser : MonoBehaviour
{
    void Update()
    {
        CheckForPause();
    }

    void CheckForPause()
    {
        if (PlayerInputs.Instance.PressedPaused)
        {
            ProcessPause();
        }
    }

    void ProcessPause()
    {
        if (GameState.CanPause())
        {
            GameState.SwitchToPaused();
        }
    }

    public void ResumeFromPause()
    {
        GameState.ResumeGame();
    }
}
