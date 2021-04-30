using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ConfigPlayerLookSensitivity : MonoBehaviour
{
    [SerializeField]
    private Slider slVertical, slHorizontal;

    public static event Action OnSensChanged;
    private void OnEnable()
    {
        LoadValues();
    }

    public void ChangeXSens(float newValue)
    {
        PlayerPrefs.SetFloat("sensX", newValue);

        OnSensChanged?.Invoke();
    }

    public void ChangeYSens(float newValue)
    {
        PlayerPrefs.SetFloat("sensY", newValue);

        OnSensChanged?.Invoke();
    }

    void LoadValues()
    {
        slHorizontal.value = PlayerPrefs.GetFloat("sensX");
        slVertical.value = PlayerPrefs.GetFloat("sensY");
    }
}
