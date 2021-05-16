using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RateUS : MonoBehaviour
{
    [SerializeField]
    private string linkAndroid = "com.CrossBlack.EscapeRoom", linkiOS = "1567825003";

    private void OnEnable()
    {
        DisableIfNotOnMobile();
    }

    void DisableIfNotOnMobile()
    {
        if (!PlayerInputs.Instance.isOnMobile)
            gameObject.SetActive(false);
    }

    public void ClickRateNow()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            Application.OpenURL("market://details?id=" + linkAndroid);
            return;
        }

        if (Application.platform == RuntimePlatform.IPhonePlayer)
        {
            Application.OpenURL("https://itunes.apple.com/app/apple-store/id" + linkiOS);
        }
    }
}
