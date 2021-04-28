using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameOverScreenLoader : MonoBehaviour
{
    private void OnEnable()
    {
        ProcessGameOver();
    }

    void ProcessGameOver()
    {
        if (GameState.IsComplete())
            PlayerWon();
        else
            PlayerLost();

        MouseLocker.FreeMouse();
    }

    void PlayerWon()
    {
        UI_Manager.Instance.Set_GameOverTextAndColor("SUCESSO!", UI_Colors.ColorComplete);
        SoundManager.PlaySoundInList("win", 1);
    }

    void PlayerLost()
    {
        UI_Manager.Instance.Set_GameOverTextAndColor("GAME OVER!", UI_Colors.ColorIncomplete);
        SoundManager.PlaySoundInList("lose", 1);
    }
}
