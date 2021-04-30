using System.Collections;
using UnityEngine;
using UnityEngine.Events;

public class GameEventListenterWithDelay : GameEventListenter
{
    [SerializeField]
    private float delayForEvent = 1f;

    [SerializeField]
    private UnityEvent delayedUnityEvent;

    public override void RaiseEvent()
    {
        unityEvent.Invoke();
        StartCoroutine(RunDelayedEvent());
    }

    public IEnumerator RunDelayedEvent() 
    {
        yield return new WaitForSeconds(delayForEvent);
        delayedUnityEvent.Invoke();
    }
}
