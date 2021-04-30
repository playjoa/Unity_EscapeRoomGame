using UnityEngine;

[System.Serializable]
public class TranslatedText
{
    [SerializeField]
    private string keyText = "helloWorld";

    [TextArea]
    public string translatedText = "Hey World!";

    public string GetTextKey() => keyText.ToLower();

    public string GetTranslatedText() => translatedText;
}