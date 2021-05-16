using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ComprasIAP : MonoBehaviour
{
    [SerializeField]
    private Text txtPrecoNoAds;

    [SerializeField]
    private GameObject crdStore, btnRestore, btnNoAds;

    private void OnEnable()
    {
        if (Application.platform == RuntimePlatform.Android)
            btnRestore.SetActive(false);
        
        CarregarPrecos();
    }

    private void FixedUpdate()
    {
        UpdateUI();
    }

    private void UpdateUI()
    {
        if (btnNoAds == null)
            return;

        if (PlayerPrefs.GetInt("noADS") == 1)
            btnNoAds.SetActive(false);
    }

    public void DeactivateScreen()
    {
        crdStore.SetActive(false);
    }

    void CarregarPrecos()
    {
        if (IAPManager.Instance == null)
            return;

        txtPrecoNoAds.text = IAPManager.Instance.GetPrice("noadsescaperoom");
    }

    public void CliqueNoADS()
    {
        if (IAPManager.Instance == null)
            return;

        IAPManager.Instance.BuyNoAds();
    }

    public void CliqueRestore()
    {
        if (IAPManager.Instance == null)
            return;

        IAPManager.Instance.RestorePurchases();
    }
}
