using UnityEngine;
using UnityEngine.Events;

public class GameEventListenter : MonoBehaviour
{
    [SerializeField]
    protected GameEvent gameEvent;

    [SerializeField]
    protected UnityEvent unityEvent;

    private void Awake()
    {
        gameEvent.Register(this);
    }

    private void OnDisable()
    {
        gameEvent.Deregister(this);
    }

    public virtual void RaiseEvent() 
    {
        unityEvent.Invoke();
    }
}
