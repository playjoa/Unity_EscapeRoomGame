using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ConfigScript : MonoBehaviour
{
    [SerializeField]
    private Text[] txtOptions;

    [SerializeField]
    private Color selectedColor, notSelectedColor;

    [SerializeField]
    private Dropdown dropDownResolutionOptions;

    private Resolution[] availableResolutions;

    private void OnEnable()
    {
        ChangeButtonColor(QualitySettings.GetQualityLevel());
        SetUpResolutionOptions();
    }

    void SetUpResolutionOptions()
    {
        List<string> resolutionNames = new List<string>();
        int idCurrentResolution = 0;

        availableResolutions = Screen.resolutions;
        dropDownResolutionOptions.ClearOptions(); 

        for (int i = 0; i < availableResolutions.Length; i++)
        {
            resolutionNames.Add(ResolutionName(availableResolutions[i]));

            if (isResolutionCurrentResultion(availableResolutions[i]))
                idCurrentResolution = i;

        }

        dropDownResolutionOptions.AddOptions(resolutionNames);

        dropDownResolutionOptions.value = idCurrentResolution;
        dropDownResolutionOptions.RefreshShownValue();
    }

    bool isResolutionCurrentResultion(Resolution res)
    {
        if (res.width != Screen.currentResolution.width)
            return false;

        if (res.height != Screen.currentResolution.height)
            return false;

        if (res.refreshRate != Screen.currentResolution.refreshRate)
            return false;

        return true;
    }

    string ResolutionName(Resolution res)
    { 
        return res.width + " x " + res.height + " - " + res.refreshRate + " Hz"; 
    }

    public void SetResolution(int idDesiredResolution)
    {
        Resolution resolutionToSet = availableResolutions[idDesiredResolution];
        
        QualitySettings.vSyncCount = 0;
        Application.targetFrameRate = resolutionToSet.refreshRate;
        Screen.SetResolution(resolutionToSet.width, resolutionToSet.height, Screen.fullScreen); 
    }

    public void SwitchGraphics(int graphicsValue)
    {
        QualitySettings.SetQualityLevel(graphicsValue);
        ChangeButtonColor(graphicsValue);
    }

    private void ChangeButtonColor(int id)
    {
        for (int i = 0; i < txtOptions.Length; i++)
        {
            if (i == id)
                txtOptions[i].color = selectedColor;
            else
                txtOptions[i].color = notSelectedColor;
        }
    }

    public static bool isMobileDevice()
    {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
            return true;

        return false;
    }
}
