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

    private PickUpObject currentPickedUpObject = null;

    void Update()
    {
        if (fpsCamera == null)
            return;

        if (!GameState.IsPlayingFPS())
            return;

        CheckForObject();
        CheckIfInteracted();
    }

    private void CheckForObject()
    {
        bool hasHitAnything = CheckIfTheresAGameObjectInReach();

        if (hasHitAnything)
        {
            CheckIfNewObjectIsDifferentThanPreviousOneAndSetUp();
            return;
        }

        NoObjectInReachLogic();
    }

    bool CheckIfTheresAGameObjectInReach()
    {
        return Physics.Raycast(CameraPosition, CameraDirection, out hitInfo, reachRange);
    }

    void CheckIfNewObjectIsDifferentThanPreviousOneAndSetUp()
    {
        if (previousHittingObject != CurrentHittingObject())
        {
            previousHittingObject = CurrentHittingObject();
            GetPossibleInteractableObject();
        }
    }

    void SavePickUpObjectIfAvailable()
    {
        PickUpObject possiblePickUpObject = CurrentHittingObject().GetComponent<PickUpObject>();

        if (possiblePickUpObject)
        {
            currentPickedUpObject = possiblePickUpObject;
            return;
        }
    }

    bool LetGoOfObject()
    {
        if (currentPickedUpObject)
        {
            currentPickedUpObject.LetGoObject();
            currentPickedUpObject = null;
            return true;
        }
        return false;
    }

    void CheckIfInteracted()
    {
        if (PlayerInputs.Instance.PressedInteracted)
        {
            if (LetGoOfObject())
                return;

            if (currentObject == null)
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

    Vector3 CameraPosition => fpsCamera.transform.position;


    Vector3 CameraDirection => fpsCamera.transform.forward;

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
