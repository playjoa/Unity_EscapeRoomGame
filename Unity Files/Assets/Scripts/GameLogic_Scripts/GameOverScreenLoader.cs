using UnityEngine;

public class GameOverScreenLoader : MonoBehaviour
{
    [SerializeField]
    private GameManager refGameManager;

    private void OnEnable()
    {
        ProcessGameOver();
    }

    void ProcessGameOver()
    {
        if (refGameManager.CheckIfWon)
            PlayerWon();
        else
            PlayerLost();

        MouseLocker.FreeMouse();
    }

    void PlayerWon()
    {
        UI_Manager.Instance.ToggleCardRateUs(true);
        UI_Manager.Instance.Set_GameOverTextAndColor("success", UI_Colors.ColorComplete);
        SoundManager.PlaySoundInList("win", 1);
    }

    void PlayerLost()
    {
        UI_Manager.Instance.ToggleCardRateUs(false);
        UI_Manager.Instance.Set_GameOverTextAndColor("gameover", UI_Colors.ColorIncomplete);
        SoundManager.PlaySoundInList("lose", 1);
    }
}
