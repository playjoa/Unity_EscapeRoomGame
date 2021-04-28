using UnityEngine;

public class LeanTweanerListAnimator : MonoBehaviour
{
    [SerializeField]
    private LeanTweenType tipoAnim = LeanTweenType.easeOutBack;

    [SerializeField]
    private AnimationCurve animCurve;

    [SerializeField]
    private float delayOfAnim = 0.05f, durationOfAnim = 0.3f, delayOfNextCard = 0.05f;

    private void OnEnable()
    {
        AnimarLista(PegarChilds());
    }

    Transform[] PegarChilds() 
    {
        Transform[] childs = new Transform[transform.childCount];

        for (int i = 0; i < childs.Length; i++)
            childs[i] = transform.GetChild(i);

        return childs;
    }

    void AnimarLista(Transform[] crds)
    {
        if (crds == null || crds.Length == 0)
            return;


        if (tipoAnim == LeanTweenType.animationCurve)
        {
            for (int i = 0; i < crds.Length; i++)
            {
                if (LeanTween.isTweening(crds[i].gameObject))
                    LeanTween.cancel(crds[i].gameObject);

                crds[i].localScale = Vector3.zero;
                LeanTween.scale(crds[i].gameObject, Vector3.one, durationOfAnim).setDelay(delayOfAnim + (delayOfNextCard * i)).setEase(animCurve);
            }
        }
        else
        {
            for (int i = 0; i < crds.Length; i++)
            {
                if (LeanTween.isTweening(crds[i].gameObject))
                    LeanTween.cancel(crds[i].gameObject);

                crds[i].localScale = Vector3.zero;
                LeanTween.scale(crds[i].gameObject, Vector3.one, durationOfAnim).setDelay(delayOfAnim + (delayOfNextCard * i)).setEase(tipoAnim);
            }
        }
    }
}
