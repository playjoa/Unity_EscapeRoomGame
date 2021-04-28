using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ConfigScript : MonoBehaviour
{
    [SerializeField]
    private Text[] txtOptions;

    [SerializeField]
    private Color selectedColor, notSelectedColor;

    private void OnEnable()
    {
        ChangeButtonColor(QualitySettings.GetQualityLevel());
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
}
