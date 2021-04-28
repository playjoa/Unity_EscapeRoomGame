using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SafeVault : MonoBehaviour
{
    [SerializeField]
    private Animator targetAnimator;

    [SerializeField]
    private string targetBoolToToggle = "Open";

    bool CurrentStatusBoolAnimation => targetAnimator.GetBool(targetBoolToToggle);

    bool NewBoolAnimationValue => !CurrentStatusBoolAnimation;

    public void OpenSafe()
    {
        if (targetAnimator == null)
            return;

        if (CurrentStatusBoolAnimation)
            return;

        targetAnimator.SetBool(targetBoolToToggle, NewBoolAnimationValue);
    }
}
