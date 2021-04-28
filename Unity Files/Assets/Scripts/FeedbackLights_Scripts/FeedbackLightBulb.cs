using UnityEngine;

public class FeedbackLightBulb : MonoBehaviour
{
    [SerializeField]
    private GameObject lightBulbOn, lightBulbOff;

    private void Start()
    {
        TurnOffLigh();
    }

    public void TurnOnLigh()
    {
        lightBulbOn.SetActive(true);
        lightBulbOff.SetActive(false);
    }

    public void TurnOffLigh() 
    {
        lightBulbOn.SetActive(false);
        lightBulbOff.SetActive(true);
    }
}
