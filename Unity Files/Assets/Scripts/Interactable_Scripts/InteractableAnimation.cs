using UnityEngine;

public class InteractableAnimation : MonoBehaviour, InteractableObject
{
    [SerializeField]
    private string interactableTip = "Interagir";

    [SerializeField]
    private Animator targetAnimator;

    [SerializeField]
    private GameObject hiddenObject;

    [SerializeField]
    private string targetBoolToToggle = "Open";

    private void Start()
    {
        ManageHiddenObject();
    }

    public void Interact()
    {
        ToggleAnimation();
    }

    public void ActivateInteractionFeedback()
    {
        UI_Manager.Instance.Set_TipText(interactableTip);
    }

    public void DeactivateInteractionFeedback()
    {
        UI_Manager.Instance.Set_TipText(string.Empty);
    }

    void ToggleAnimation()
    {
        if (targetAnimator == null)
            return;

        targetAnimator.SetBool(targetBoolToToggle, NewBoolAnimationValue);
        ManageHiddenObject();
    }

    void ManageHiddenObject() 
    {
        if (!hiddenObject || hiddenObject.activeSelf)
            return;

        hiddenObject.SetActive(CurrentStatusBoolAnimation);
    }

    bool CurrentStatusBoolAnimation => targetAnimator.GetBool(targetBoolToToggle);

    bool NewBoolAnimationValue => !CurrentStatusBoolAnimation; 
}
