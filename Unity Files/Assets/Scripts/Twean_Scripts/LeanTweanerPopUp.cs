using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeanTweanerPopUp : MonoBehaviour
{
    [SerializeField]
    private LeanTweenType tipoAnimAbrir = LeanTweenType.easeOutBack, tipoAnimFechar = LeanTweenType.easeInOutBack;

    [SerializeField]
    private float delayOfAnim = 0.05f, durationOfAnim = 0.3f, delayToClosePopUp = 3f;

    private void OnEnable()
    {
        AnimarAbrir();
    }

    void AnimarAbrir() 
    {
        transform.localScale = Vector3.zero;
        LeanTween.scale(gameObject, Vector3.one, durationOfAnim).setDelay(delayOfAnim).setEase(tipoAnimAbrir);

        Invoke("AnimarFechar", delayToClosePopUp);
    }

    void AnimarFechar()
    {
        LeanTween.scale(gameObject, Vector3.zero, durationOfAnim).setDelay(delayOfAnim).setEase(tipoAnimFechar).setOnComplete(DesativarPopUp);
    }

    void DesativarPopUp() 
    {
        this.gameObject.SetActive(false);
    }
}
