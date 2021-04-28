using UnityEngine;

public class InteractableNote : MonoBehaviour, InteractableObject
{
    [SerializeField]
    private string noteName;

    [TextArea]
    public string descPuzzle;

    public void Interact()
    {
        if (GameState.IsInteracting())
            return;

        GameState.SwitchToInteracting();
        UI_Manager.Instance.Set_Note(descPuzzle);
    }

    public void ActivateInteractionFeedback()
    {
        UI_Manager.Instance.Set_TipText(noteName);
    }

    public void DeactivateInteractionFeedback()
    {
        UI_Manager.Instance.Set_TipText(string.Empty);
    }
}
