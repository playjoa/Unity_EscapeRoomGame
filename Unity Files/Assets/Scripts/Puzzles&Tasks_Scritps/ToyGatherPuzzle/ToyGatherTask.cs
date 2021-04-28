using UnityEngine;
using System;

public class ToyGatherTask : MonoBehaviour, ITask
{
    [SerializeField]
    private ToyGatherPuzzle currentBasketPuzzle;

    [SerializeField]
    private PickUpObject objectPicker;

    public bool isTaskComplete { get; private set; }

    public static event Action<ITask> OnTaskToggled;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == currentBasketPuzzle.TargetCollider())
            ToggleTaskStatus(true);
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject == currentBasketPuzzle.TargetCollider())
            ToggleTaskStatus(false);
    }

    void ToggleTaskStatus(bool value)
    {
        isTaskComplete = value;

        if (value)
            objectPicker.DeativatePìckUp();
        else
            objectPicker.AllowPickUp();

        OnTaskToggled(this);
    }
}
