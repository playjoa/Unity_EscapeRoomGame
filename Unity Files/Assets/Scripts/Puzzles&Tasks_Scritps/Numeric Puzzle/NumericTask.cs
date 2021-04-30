using UnityEngine;
using System;

public class NumericTask : MonoBehaviour, InteractableObject, ITask
{
    [SerializeField]
    private int numericPassword = 1234;

    private string currentPassword = string.Empty;

    public bool isTaskComplete { get; private set; } = false;

    public static event Action<ITask> OnTaskComplete;

    public void Interact()
    {
        if (GameState.IsInteracting())
            return;

        GameState.SwitchToInteracting();

        UI_Manager.Instance.ToggleNumericTaskScreen();

        FindObjectOfType<NumericTaskOperator>().GetCurrentPassWord(this);
    }

    public void ActivateInteractionFeedback()
    {
        UI_Manager.Instance.Set_TipText("password");
    }

    public void DeactivateInteractionFeedback()
    {
        UI_Manager.Instance.Set_TipText(string.Empty);
    }

    public void NewInput(int number)
    {
        SoundManager.PlaySoundInList("padclick", 1);

        if (isCurrentPasswordFull())
            return;

        currentPassword += number.ToString();
    }

    public void RemoveInput()
    {
        SoundManager.PlaySoundInList("back", 1);

        if (isCurrentPasswordEmpty())
            return;

        currentPassword = currentPassword.Remove(CurrentPasswordLength() - 1);
    }

    public void ConfirmInput() 
    {
        if (currentPassword == string.Empty)
        {
            SoundManager.PlaySoundInList("paderror", 1);
            return;
        }

        if (isTaskComplete)
            return;

        if (CurrentPasswordToInt() == numericPassword)
        {
            isTaskComplete = true;
            OnTaskComplete(this);
        }
        else
            SoundManager.PlaySoundInList("paderror", 1);

        ResetCurrentPassword();
    }

    public string CurrentPassWord()
    {
        if (isTaskComplete)
            return numericPassword.ToString();

        if (isCurrentPasswordEmpty())
            return "-";

        return currentPassword;
    }

    void ResetCurrentPassword()
    {
        currentPassword = string.Empty;
    }

    int PasswordLength() 
    {
        return numericPassword.ToString().Length;
    }

    int CurrentPasswordLength()
    {
        return currentPassword.Length;
    }

    bool isCurrentPasswordFull()
    {
        if (CurrentPasswordLength() == PasswordLength())
            return true;

        return false;
    }

    bool isCurrentPasswordEmpty()
    {
        if (CurrentPasswordLength() <= 0)
            return true;

        return false;
    }

    int CurrentPasswordToInt() 
    {
        return int.Parse(currentPassword);
    }  
}
