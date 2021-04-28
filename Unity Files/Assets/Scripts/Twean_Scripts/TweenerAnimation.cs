using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TweenerAnimation : MonoBehaviour
{
    [SerializeField]
    private GameObject objetoParaDesativar;

    [SerializeField]
    private LeanTweenType tipoAnim = LeanTweenType.easeOutBack;

    [SerializeField]
    private AnimationCurve animCurve;

    [SerializeField]
    private float delayOfAnim = 0.05f, durationOfAnim = 0.3f;

    [SerializeField]
    private bool switchToFPSAfterClose = false;

    private Vector3 tamanhoInicial;

    private void Awake()
    {
        tamanhoInicial = transform.localScale;
    }

    private void OnEnable()
    {
        Animar();
    }

    void Animar()
    {
        transform.localScale = Vector3.zero;
        if (tipoAnim == LeanTweenType.animationCurve)
            LeanTween.scale(gameObject, tamanhoInicial, durationOfAnim).setDelay(delayOfAnim).setEase(animCurve);
        else
            LeanTween.scale(gameObject, tamanhoInicial, durationOfAnim).setDelay(delayOfAnim).setEase(tipoAnim);
    }

    public void DesativarObjeto()
    {
        LeanTween.scale(gameObject, Vector3.zero, durationOfAnim).setEase(LeanTweenType.easeInOutQuad).setOnComplete(DesativarDepoisDaAnim);
    }

    void DesativarDepoisDaAnim()
    {
        GameObject aux = null;

        if (objetoParaDesativar == null)
            aux = this.gameObject;
        else
            aux = objetoParaDesativar;

        aux.SetActive(false);
        transform.localScale = tamanhoInicial;

        ProcessFPSSwitcher();
    }

    void ProcessFPSSwitcher()
    {
        if (switchToFPSAfterClose)
            GameState.SwitchToPlayingFPS();
    }
}
