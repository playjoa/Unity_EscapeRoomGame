using UnityEngine;
using UnityEngine.UI;

public class UI_Manager : MonoBehaviour
{
    [SerializeField]
    private Color colorComplete = Color.green, colorIncomplete = Color.red;

    [SerializeField]
    private GameObject telaGameplay, telaNumericTask, cardPuzzle, telaNote, telaTutorial, telaPaused, telaGameOver;

    [SerializeField]
    private Text txtTip, txtCurrentPassword, txtStatsPuzzle, txtDescPuzzle, txtNote, txtTimer, txtGameOverText;

    [SerializeField]
    private Image bgNumericTask;

    public static UI_Manager Instance;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(this);
    }

    public void Set_TipText(string valueToSet) 
    {
        txtTip.text = valueToSet;
    }

    public void Set_Note(string valueToSet)
    {
        telaNote.SetActive(true);
        txtNote.text = valueToSet;
    }

    public void Set_Timer(string valueToSet)
    {
        txtTimer.text = valueToSet;
    }

    public void Set_GameOverTextAndColor(string valueToSet, UI_Colors statusColor)
    {
        txtGameOverText.text = valueToSet;
        txtGameOverText.color = ColorToSet(statusColor);
    }

    public void Set_TimerWithColor(string valueToSet, UI_Colors statusColor)
    {
        txtTimer.text = valueToSet;
        txtTimer.color = ColorToSet(statusColor);
    }

    public void Set_CurrentPasswordText(string valueToSet)
    {
        txtCurrentPassword.text = valueToSet;
    }

    public void ToggleTutorialScreen()
    {
        telaTutorial.SetActive(true);
        telaGameplay.SetActive(false);
        telaNumericTask.SetActive(false);
        telaNote.SetActive(false);
    }

    public void ToggleGamePlayScreen()
    {
        telaTutorial.SetActive(false);
        telaGameplay.SetActive(true);
        telaNumericTask.SetActive(false);
        telaNote.SetActive(false);
    }

    public void ToggleNumericTaskScreen()
    {
        telaTutorial.SetActive(false);
        telaGameplay.SetActive(false);
        telaNote.SetActive(false);
        telaNumericTask.SetActive(true);
    }

    public void ToggleCutscene()
    {
        telaTutorial.SetActive(false);
        telaGameplay.SetActive(false);
        telaNumericTask.SetActive(false);
        telaNote.SetActive(false);
    }

    public void ToggleGameOverScreen()
    {
        telaGameOver.SetActive(true);
        telaGameplay.SetActive(false);
        telaNote.SetActive(false);
        telaNumericTask.SetActive(false);
    }

    public void TogglePauseScreen(bool value)
    {
        telaPaused.SetActive(value);
    }

    public void SetPuzzleDesc(string statusPuzzle, string descPuzzle, UI_Colors statusColor)
    {
        if (cardPuzzle.activeSelf)
            return;

        cardPuzzle.SetActive(true);
        txtStatsPuzzle.text = "Status: " + statusPuzzle;
        txtStatsPuzzle.color = ColorToSet(statusColor);
        txtDescPuzzle.text = descPuzzle;
    }

    public void DeactivatePuzzleCard()
    {
        if(cardPuzzle.activeSelf)
            cardPuzzle.SetActive(false);
    }

    public void DeactivateNoteScreen()
    {
        if (telaNote.activeSelf)
            telaNote.SetActive(false);
    }

    public void SetColorOnNumericTask(UI_Colors colorToSet)
    {
        bgNumericTask.color = ColorToSet(colorToSet);
    }

    Color ColorToSet(UI_Colors color)
    { 
        switch (color)
        {
            case UI_Colors.ColorComplete:

                return colorComplete;


            case UI_Colors.ColorIncomplete:

                return colorIncomplete;

            default:
                return Color.white;

        }
    }
}

public enum UI_Colors
{
    ColorComplete,
    ColorIncomplete
}
