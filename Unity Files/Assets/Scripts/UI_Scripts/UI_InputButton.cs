using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;

public class UI_InputButton : MonoBehaviour, IPointerClickHandler
{
    [SerializeField]
    private string _buttonID = "Interact";

    public bool isPressing { get; private set; } = false;

    public string idButton => _buttonID;

    public void OnPointerClick(PointerEventData eventData)
    {
        StartCoroutine(MakeClick());
    }

    IEnumerator MakeClick()
    {
        isPressing = true;
        yield return new WaitForEndOfFrame();
        isPressing = false;
    }

    private void OnDisable()
    {
        isPressing = false;
    }
}
