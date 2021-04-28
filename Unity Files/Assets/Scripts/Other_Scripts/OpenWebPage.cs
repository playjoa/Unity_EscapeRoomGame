using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenWebPage : MonoBehaviour
{
    [SerializeField]
    private string link = "https://github.com/playjoa";

    public void OpenWeb()
    {
        Application.OpenURL(link);
    }
}
