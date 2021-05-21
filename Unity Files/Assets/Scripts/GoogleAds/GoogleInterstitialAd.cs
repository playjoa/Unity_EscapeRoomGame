using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using System;

public class GoogleInterstitialAd : MonoBehaviour {

    static InterstitialAd interstitial;
    
    [SerializeField]
    private string adIDAndroid = "ca-app-pub-5280110389878142/7860527509";
    
    [SerializeField]
    private string adIDiPhone = "ca-app-pub-5280110389878142/2136948603";
    
    private string adIDFinal;

    void Start ()
    {
        if (!ConfigScript.isMobileDevice())
            return;

        RequestInterstitial();

        // Called when an ad request has successfully loaded.
        interstitial.OnAdLoaded += HandleOnAdLoaded;
        // Called when an ad request failed to load.
        interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad;
        // Called when an ad is shown.
        interstitial.OnAdOpening += HandleOnAdOpened;
        // Called when the ad is closed.
        interstitial.OnAdClosed += HandleOnAdClosed;
        // Called when the ad click caused the user to leave the application.
        interstitial.OnAdLeavingApplication += HandleOnAdLeavingApplication; 
    }

    private void RequestInterstitial()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            adIDFinal = adIDAndroid;
        }
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
        {
            adIDFinal = adIDiPhone;
            MobileAds.SetiOSAppPauseOnBackground(true);
        }

        // Initialize an InterstitialAd.
        interstitial = new InterstitialAd(adIDFinal);
        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the interstitial with the request.
        interstitial.LoadAd(request);
    }

    public void ShowAd()
    {
        if (!ConfigScript.isMobileDevice())
            return;

        if (PlayerPrefs.GetInt("noADS") == 1)
            return;

        if (interstitial.IsLoaded())
        {
            interstitial.Show();
            RequestInterstitial();
        }
    }

    public void HandleOnAdLoaded(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdLoaded event received");
    }

    public void HandleOnAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        RequestInterstitial();
    }

    public void HandleOnAdOpened(object sender, EventArgs args)
    {

    }

    public void HandleOnAdClosed(object sender, EventArgs args)
    {
      
    }

    public void HandleOnAdLeavingApplication(object sender, EventArgs args)
    {
        MonoBehaviour.print("HandleAdLeavingApplication event received");
    }
}