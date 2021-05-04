using System;
using System.Collections.Generic;
using UnityEngine;

public static class Translate
{
    //CHANGE YOUR DESIRED DEFAULT LANGUAGE
    private static SystemLanguage defaultLanguage = SystemLanguage.English;

    public static event Action OnLanguageChanged;
    private static Dictionary<SystemLanguage, Language> languageDictionary;
    private static SystemLanguage currentLanguage = defaultLanguage;

    //CHANGE YOUR TO YOUR DESIRED USE
    private const string playerPrefLanguage = "gameLanguage";
    private const string languagesFolderInResources = "Languages";

    private static Language[] availableLanguages;

    public static string CurrentLanguage => currentLanguage.ToString();

    static void InitializeSystem()
    {
        if (languageDictionary != null)
            return;

        availableLanguages = Resources.LoadAll<Language>(languagesFolderInResources);

        CreateDictionary();
        GetCurrentLanguage();
    }

    static void CreateDictionary()
    {
        languageDictionary = new Dictionary<SystemLanguage, Language>();

        foreach (Language currentLanguage in availableLanguages)
        {
            currentLanguage.SetUpLanguage();
            languageDictionary.Add(currentLanguage.KeyLanguage, currentLanguage);
        }
    }

    static void GetCurrentLanguage()
    {
        SystemLanguage currentSystemLanguage = CurrentSystemLanguage();

        if (!languageDictionary.ContainsKey(currentSystemLanguage))
        {
            currentLanguage = defaultLanguage;
            return;
        }

        currentLanguage = currentSystemLanguage;
    }

    public static string GetTranslatedText(string keyText)
    {
        InitializeSystem();

        if (keyText == string.Empty)
            return string.Empty;

        keyText = keyText.ToLower();

        string translatedText = languageDictionary[currentLanguage].ReturnTranslatedText(keyText);

        if (translatedText == "-empty-")
            translatedText = GetDefaultLanguageText(keyText);

        return translatedText;
    }

    public static void SetNewLanguage(SystemLanguage newLanguage)
    {
        InitializeSystem();

        if (!AvailableLanguages().Contains(newLanguage))
        {
            currentLanguage = defaultLanguage;
            Debug.LogError("This language [" + newLanguage.ToString() + "] is not available, switching to default language");
            return;
        }

        currentLanguage = newLanguage;

        RegisterNewLanguageToMemory(currentLanguage);

        OnLanguageChanged?.Invoke();
    }

    public static List<SystemLanguage> AvailableLanguages()
    {
        InitializeSystem();

        return new List<SystemLanguage>(languageDictionary.Keys);
    }

    static void RegisterNewLanguageToMemory(SystemLanguage newLanguage) 
    {
        PlayerPrefs.SetString(playerPrefLanguage, newLanguage.ToString());
    }

    static string GetDefaultLanguageText(string key)
    {
        try
        {
            return languageDictionary[defaultLanguage].ReturnTranslatedText(key);
        }
        catch
        {
            string returnError = "Default Language not found or set! [" + defaultLanguage + "]";
            Debug.LogError(returnError);
            return returnError;
        }
    }

    static SystemLanguage CurrentSystemLanguage()
    {
        if (PlayerPrefs.HasKey(playerPrefLanguage))
        {
           string savedLanguage = PlayerPrefs.GetString(playerPrefLanguage);

           return ConvertStringToSystemLanguage(savedLanguage);
        }

        return Application.systemLanguage;
    }

    static SystemLanguage ConvertStringToSystemLanguage(string languageToConvert) 
    {
        return (SystemLanguage)Enum.Parse(typeof(SystemLanguage), languageToConvert);
    } 
}