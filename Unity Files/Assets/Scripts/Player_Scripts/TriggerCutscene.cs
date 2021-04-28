using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerCutscene : MonoBehaviour
{
    [SerializeField]
    private GameEvent playerWalkedOutside;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
            PrepareForCutscene();
    }

    void PrepareForCutscene()
    {
        playerWalkedOutside?.Invoke();
        GameState.SwitchToCutscene();
    }
}
