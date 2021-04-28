using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PreventLeavingPlayableArea : MonoBehaviour
{
    [SerializeField]
    private string triggerToTeleport = "outofbounds";

    private Vector3 initialPosition;
    private Quaternion initialRotation;
    private PickUpObject objectOrigin;

    private void Awake()
    {
        GetInitialValues();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag(triggerToTeleport))
            TeleportBackToOrigin();
    }

    void GetInitialValues()
    {
        initialPosition = transform.localPosition;
        initialRotation = transform.localRotation;

        objectOrigin = GetComponent<PickUpObject>();
    }

    void TeleportBackToOrigin()
    {
        if(objectOrigin!= null)
            objectOrigin.LetGoObject();
       
        transform.localPosition = initialPosition;
        transform.localRotation = initialRotation;
    }
}
