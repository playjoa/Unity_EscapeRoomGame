using UnityEngine;

public class GenericAnimationToTrigger : MonoBehaviour
{
    [SerializeField]
    private Animator targetAnimator;

    [SerializeField]
    private string targetBoolToToggle = "Open";

    bool CurrentStatusBoolAnimation => targetAnimator.GetBool(targetBoolToToggle);

    bool NewBoolAnimationValue => !CurrentStatusBoolAnimation;

    public void TriggerAnimation()
    {
        if (targetAnimator == null)
            return;

        if (CurrentStatusBoolAnimation)
            return;

        targetAnimator.SetBool(targetBoolToToggle, NewBoolAnimationValue);
    }
}
