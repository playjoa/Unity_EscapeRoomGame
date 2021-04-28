using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NumericTaskOperator : MonoBehaviour
{
    private NumericTask currentNumericPassword;

    public void GetCurrentPassWord(NumericTask task)
    {
        currentNumericPassword = task;
        UpdateBGPasswordColor();
        UpdatePasswordFeedBack();
    }

    public void CloseNumericTask()
    {
        SoundManager.PlaySoundInList("back", 1);

        GameState.SwitchToPlayingFPS();
    }

    public void NumericClick(int numberClicked)
    {
        currentNumericPassword.NewInput(numberClicked);
        UpdatePasswordFeedBack();
    }

    public void ClearNumberClick()
    {
        currentNumericPassword.RemoveInput();
        UpdatePasswordFeedBack();
    }

    public void ConfirmClick()
    {
        currentNumericPassword.ConfirmInput();
        UpdateBGPasswordColor();
        UpdatePasswordFeedBack();
    }

    void UpdatePasswordFeedBack()
    {
        if (currentNumericPassword == null)
            return;

        UI_Manager.Instance.Set_CurrentPasswordText(currentNumericPassword.CurrentPassWord());
    }

    void UpdateBGPasswordColor()
    {
        UI_Manager.Instance.SetColorOnNumericTask(CurrentBGColor());
    }

    UI_Colors CurrentBGColor()
    {
        if (currentNumericPassword.isTaskComplete)
            return UI_Colors.ColorComplete;

        return UI_Colors.ColorIncomplete;
    }
}
