using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Text))]
public class Translator_UI_Text : MonoBehaviour
{
    [SerializeField]
    private string textKey = "title";

    private Text textFieldToTranslate;

    private void OnEnable()
    {
        if(textFieldToTranslate == null)
            textFieldToTranslate = GetComponent<Text>();

        Translate.OnLanguageChanged += GetTranslatedText;
        GetTranslatedText();
    }

    private void OnDisable()
    {
        Translate.OnLanguageChanged -= GetTranslatedText;
    }

    void GetTranslatedText()
    {
        textFieldToTranslate.text = Translate.GetTranslatedText(textKey);
    }  
}
