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
            CheckIfNewObjectIsDifferentAndSetUp();
            return;
        }

        NoObjectInReachLogic();
    }

    void CheckIfInteracted()
    {
        if (PlayerInputs.PressedInteracted())
        {
            if (currentObject == null)
                return;

            SoundManager.PlaySoundInList("interact", 1);
            currentObject.Interact();
        }
    }

    void NoObjectInReachLogic() 
    {
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

    bool CheckIfTheresAGameObjectInReach() 
    {
        return Physics.Raycast(fpsCamera.ScreenPointToRay(Input.mousePosition), out hitInfo, reachRange);
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
