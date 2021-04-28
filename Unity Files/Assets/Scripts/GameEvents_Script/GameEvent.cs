using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName ="Game Event", fileName ="Novo Game Event")]
public class GameEvent : ScriptableObject
{
    HashSet<GameEventListenter> listeners = new HashSet<GameEventListenter>();

    public void Invoke() 
    {
        foreach (var globalEventListener in listeners)
            globalEventListener.RaiseEvent();
    }

    public void Register(GameEventListenter gameEventListener)
    {
        listeners.Add(gameEventListener);
    }

    public void Deregister(GameEventListenter gameEventListener)
    {
        listeners.Remove(gameEventListener);
    }
}
