using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_Manager : MonoBehaviour
{
    [System.Serializable]
    public class UI_Item
    {
        public string idItem = "gameplay";
        public GameObject item;

        public void ActivateItem()
        {
            if (!item.activeSelf)
                item.SetActive(true);
        }

        public void DeactivateItem()
        {
            if (item.activeSelf)
                item.SetActive(false);
        }

        public void ToggleItem(bool value)
        {
            if (item.activeSelf != value)
                item.SetActive(value);
        }
    }

    [SerializeField]
    private List<UI_Item> UI_screens;

    [SerializeField]
    private Color colorComplete = Color.green, colorIncomplete = Color.red;

    [SerializeField]
    private GameObject cardPuzzle, UI_MobileInputs, rateUsCard;

    [SerializeField]
    private Text txtTip, txtCurrentPassword, txtStatsPuzzle, txtDescPuzzle, txtNote, txtTimer, txtGameOverText;

    [SerializeField]
    private Image bgNumericTask;

    public static UI_Manager Instance;
    
    private Dictionary<string, UI_Item> ui_Itens;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(this);

        CreateUI_ScreenDictionary();
    }

    void CreateUI_ScreenDictionary()
    {
        ui_Itens = new Dictionary<string, UI_Item>();

        foreach (UI_Item screen in UI_screens)
            ui_Itens.Add(screen.idItem, screen);
    }

    void ActivateIndividualScreen(string idScreen)
    {
        if (!ui_Itens.ContainsKey(idScreen))
        {
            Debug.LogWarning("NO UI_ITEM WITH ID: " + ui_Itens);
            return;
        }

        foreach (var item in ui_Itens)
        {
            if (item.Key == idScreen)
            {
                item.Value.ActivateItem();
                return;
            }
            item.Value.DeactivateItem();
        }
    }

    void DeactivateAllScreen()
    {
        foreach (var item in ui_Itens)
            item.Value.DeactivateItem();
    }

    public void Set_TipText(string valueToSet) 
    {
        txtTip.text = Translate.GetTranslatedText(valueToSet);
    }

    public void Set_Note(string valueToSet)
    {
        ActivateIndividualScreen("note");
        txtNote.text = Translate.GetTranslatedText(valueToSet);
    }

    public void Set_Timer(string valueToSet)
    {
        txtTimer.text = valueToSet;
    }

    public void Set_GameOverTextAndColor(string valueToSet, UI_Colors statusColor)
    {
        txtGameOverText.text = Translate.GetTranslatedText(valueToSet);
        txtGameOverText.color = ColorToSet(statusColor);
    }

    public void Set_TimerWithColor(string valueToSet, UI_Colors statusColor)
    {
        txtTimer.text = valueToSet;
        txtTimer.color = ColorToSet(statusColor);

        if (valueToSet == "leavehouse")
            txtTimer.text = Translate.GetTranslatedText(valueToSet);
    }

    public void Set_CurrentPasswordText(string valueToSet)
    {
        txtCurrentPassword.text = valueToSet;
    }

    public void ToggleCardRateUs(bool value)
    {
        rateUsCard.SetActive(value);
    }

    public void ToggleTutorialScreen()
    {
        ToggleUI_Inputs(false);
        ActivateIndividualScreen("tutorial");
    }

    public void ToggleGamePlayScreen()
    {
        ToggleUI_Inputs(true);
        ActivateIndividualScreen("gameplay");
    }

    public void ToggleNumericTaskScreen()
    {
        ActivateIndividualScreen("numeric");
    }

    public void ToggleCutscene()
    {
        DeactivateAllScreen();
    }

    public void ToggleGameOverScreen()
    {
        ActivateIndividualScreen("gameover");
    }

    public void ToggleUI_Inputs(bool value)
    {
        if(PlayerInputs.Instance.isOnMobile)
            UI_MobileInputs.SetActive(value);
    }

    public void TogglePauseScreen(bool value)
    {
        ui_Itens["pause"].ToggleItem(value);
    }

    public void SetPuzzleDesc(string statusPuzzle, string descPuzzle, UI_Colors statusColor)
    {
        if (cardPuzzle.activeSelf)
            return;

        cardPuzzle.SetActive(true);
        txtStatsPuzzle.text = "Status: " + statusPuzzle;
        txtStatsPuzzle.color = ColorToSet(statusColor);
        txtDescPuzzle.text = Translate.GetTranslatedText(descPuzzle);
    }

    public void DeactivatePuzzleCard()
    {
        if(cardPuzzle.activeSelf)
            cardPuzzle.SetActive(false);
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
