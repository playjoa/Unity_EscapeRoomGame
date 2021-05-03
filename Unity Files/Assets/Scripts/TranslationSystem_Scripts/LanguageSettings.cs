using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LanguageSettings : MonoBehaviour
{
    [SerializeField]
    private Dropdown dropDownLanguageOptions;

    private void OnEnable()
    {
        SetUpLanguageOptions();
    }

    void SetUpLanguageOptions()
    {
        List<string> languagesNames = new List<string>();
        int idCurrentLanguage = 0;

        dropDownLanguageOptions.ClearOptions();

        for (int i = 0; i < Translate.AvailableLanguages().Count; i++)
        {
            languagesNames.Add(Translate.AvailableLanguages()[i].ToString());

            if (isLanguageCurrentLanguage(Translate.AvailableLanguages()[i]))
                idCurrentLanguage = i;

        }

        dropDownLanguageOptions.AddOptions(languagesNames);

        dropDownLanguageOptions.value = idCurrentLanguage;
        dropDownLanguageOptions.RefreshShownValue();
    }
    
    bool isLanguageCurrentLanguage(SystemLanguage language)
    {
        if (language.ToString() != Translate.CurrentLanguage)
            return false;

        return true;
    }

    public void SetLanguage(int idDesiredLanguage)
    {
        SystemLanguage languageToSet = Translate.AvailableLanguages()[idDesiredLanguage];

        Translate.SetNewLanguage(languageToSet);
    }
}
