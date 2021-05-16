using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInteractions : MonoBehaviour
{
    [SerializeField]
    private float reachRange = 4;

    [SerializeField]
    private Camera fpsCamera;

    private GameObject previousHittingObject = null;
    private InteractableObject currentObject;
    private RaycastHit hitInfo = new RaycastHit();

    private PickUpObject currentPickedUpObject;

    void Update()
    {
        if (fpsCamera == null)
            return;

        if (!GameState.IsPlayingFPS())
            return;

        CheckForObject();
        CheckIfInteracted();
    }

    void SavePickUpObjectIfAvailable()
    {
        if (CurrentHittingObject().GetComponent<PickUpObject>())
        {
            currentPickedUpObject = CurrentHittingObject().GetComponent<PickUpObject>();
            return;
        }

        currentPickedUpObject = null;
    }

    bool LetGoOfObject()
    {
        if (currentPickedUpObject != null)
        {
            currentPickedUpObject.LetGoObject();
            currentPickedUpObject = null;
            return true;
        }

        return false;
    }

    private void CheckForObject()
    {
        bool hasHitAnything = CheckIfTheresAGameObjectInReach();

        if (hasHitAnything)
        {
            CheckIfNewObjectIsDifferentAndSetUp();
            return;
        }

        NoObjectInReachLogic();
    }

    void CheckIfInteracted()
    {
        if (PlayerInputs.Instance.PressedInteracted)
        {
            if (currentObject == null)
                return;

            if (LetGoOfObject())
                return;

            SoundManager.PlaySoundInList("interact", 1);
            currentObject.Interact();
            SavePickUpObjectIfAvailable();
        }
    }

    void NoObjectInReachLogic() 
    {
        if (PlayerInputs.Instance.PressedInteracted)
            LetGoOfObject();

        if (previousHittingObject != null)
        {
            if (currentObject != null)
            {
                currentObject.DeactivateInteractionFeedback();
                currentObject = null;
            }

            previousHittingObject = null;
        }
    }

    void CheckIfNewObjectIsDifferentAndSetUp()
    {
        if (previousHittingObject != CurrentHittingObject())
        {
            previousHittingObject = CurrentHittingObject();
            GetPossibleInteractableObject();
        }
    }

    Vector3 CameraPosition => fpsCamera.transform.position;


    Vector3 CameraDirection => fpsCamera.transform.forward;

    bool CheckIfTheresAGameObjectInReach() 
    {
        return Physics.Raycast(CameraPosition, CameraDirection, out hitInfo, reachRange);
    }

    GameObject CurrentHittingObject() 
    {
        return hitInfo.transform.gameObject;
    }

    void DeactivateFeedbackFromPreviousInteraction()
    {
        if (currentObject != null)
            currentObject.DeactivateInteractionFeedback();
    }

    void ActivateFeedbackFromNewInteraction()
    {
        if (currentObject != null)
            currentObject.ActivateInteractionFeedback();
    }

    void GetPossibleInteractableObject()
    {
        DeactivateFeedbackFromPreviousInteraction();

        currentObject = CurrentHittingObject().GetComponent<InteractableObject>();

        ActivateFeedbackFromNewInteraction();
    }
}
