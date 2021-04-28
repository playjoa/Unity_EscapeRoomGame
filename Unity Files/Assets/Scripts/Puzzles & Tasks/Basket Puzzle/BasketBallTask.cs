using System;
using UnityEngine;

public class BasketBallTask : MonoBehaviour, ITask
{
    [SerializeField]
    private BasketPuzzle currentBasketPuzzle;

    [SerializeField]
    private PickUpObject objectPicker;

    public bool isTaskComplete { get; private set; }

    public static event Action<ITask> OnTaskComplete;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == currentBasketPuzzle.TargetNet())
            TaskComplete();
    }

    void TaskComplete()
    {
        if (objectPicker.IsPickingUp)
            return;

        if (isTaskComplete)
            return;

        isTaskComplete = true;
        OnTaskComplete(this);
    }
}
