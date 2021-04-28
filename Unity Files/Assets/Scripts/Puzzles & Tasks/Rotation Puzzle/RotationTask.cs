using System;
using UnityEngine;

public class RotationTask : MonoBehaviour, InteractableObject, ITask
{
    [SerializeField]
    private string tipText = "Rotacionar";

    [SerializeField]
    private Transform targetToRotate;

    [SerializeField]
    private int right_Y_Rotation = 90;

    [SerializeField]
    private int[] possible_Y_Rotations;

    public bool isTaskComplete => IsRightRotation();

    public static event Action<ITask> OnTaskChanged;

    int idCurrentRotation = 0;

    private void Start()
    {
        Initialize();
    }

    void Initialize()
    {
        GetCurrentRotationID();
    }

    void GetCurrentRotationID() 
    {
        for (int i = 0; i < possible_Y_Rotations.Length; i++)
        {
            if (possible_Y_Rotations[i] == Int_Y_Rotation())
            {
                idCurrentRotation = i;
                break;
            }
        }
    }

    public void Interact()
    {
        if (isTaskComplete)
            return;

        ToggleRotate();
        OnTaskChanged(this);
    }

    public void ActivateInteractionFeedback()
    {
        UI_Manager.Instance.Set_TipText(tipText);
    }

    public void DeactivateInteractionFeedback()
    {
        UI_Manager.Instance.Set_TipText(string.Empty);
    }

    void ToggleRotate() 
    {
        idCurrentRotation++;

        if (idCurrentRotation >= possible_Y_Rotations.Length)
        {
            idCurrentRotation = 0;
        }

        SetRotationToNewOne(idCurrentRotation);
    }

    int Int_Y_Rotation()
    {
        return Mathf.RoundToInt(targetToRotate.localEulerAngles.y);
    }

    void SetRotationToNewOne(int idRotation) 
    {
        targetToRotate.localRotation = Quaternion.Euler(targetToRotate.localRotation.x, possible_Y_Rotations[idRotation], targetToRotate.localRotation.z);
    }

    bool IsRightRotation()
    {   
        if (Int_Y_Rotation() == right_Y_Rotation)
            return true;

        return false;
    }
}
