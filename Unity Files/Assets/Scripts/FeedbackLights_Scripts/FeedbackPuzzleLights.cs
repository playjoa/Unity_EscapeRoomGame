using UnityEngine;

public class FeedbackPuzzleLights : MonoBehaviour
{
    [SerializeField]
    private FeedbackLightBulb[] ligthBulbs;

    public void ToggleLights(int qtdToLightUp)
    {
        for (int i = 0; i < ligthBulbs.Length; i++)
        {
            if (i <= qtdToLightUp - 1)
                ligthBulbs[i].TurnOnLigh();
            else
                ligthBulbs[i].TurnOffLigh();
        }
    }
}
