using UnityEngine;

public class NoteOperator : MonoBehaviour
{
    public void CloseNote()
    {
        SoundManager.PlaySoundInList("back", 1);

        GameState.SwitchToPlayingFPS();
    }
}
