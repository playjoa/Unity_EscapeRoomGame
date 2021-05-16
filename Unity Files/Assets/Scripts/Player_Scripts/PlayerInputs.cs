using UnityEngine;
using System.Collections.Generic;

public class PlayerInputs : MonoBehaviour
{
    [SerializeField]
    private bool _isMobile = false;

    [SerializeField]
    private Joystick joyMovement, joyLook;

    private static Dictionary<string, UI_InputButton> UI_mobileButtons;

    private static Joystick s_JoyMovement, s_JoyLook;

    private void Start()
    {
        PrepareValues();
    }

    void PrepareValues()
    {
        if (_isMobile)
        {
            s_JoyLook = joyLook;
            s_JoyMovement = joyMovement;

            CreateButtonDictionary();
            return;
        }
    }

    void CreateButtonDictionary()
    {
        UI_InputButton[] availableButtons = FindObjectsOfType<UI_InputButton>();
        UI_mobileButtons = new Dictionary<string, UI_InputButton>();

        foreach (UI_InputButton button in availableButtons)
            UI_mobileButtons.Add(button.idButton, button);
    }

    static bool ButtonPressProcessor(string buttonToCheckPress)
    {
        if (isOnMobile)
        {
            if (UI_mobileButtons.ContainsKey(buttonToCheckPress))
                return UI_mobileButtons[buttonToCheckPress].isPressing;

            return false;
        }

        return Input.GetButtonDown(buttonToCheckPress);
    }

    static float Cam_X()
    {
        if (isOnMobile)
        {
            return s_JoyLook.Horizontal;
        }

        return Input.GetAxis("Mouse X");
    }

    static float Cam_Y()
    {
        if (isOnMobile)
        {
            return s_JoyLook.Vertical;
        }

        return Input.GetAxis("Mouse Y");
    }

    public static Vector2 MoveInputs()
    {
        if (isOnMobile)
            return new Vector2(s_JoyMovement.Horizontal, s_JoyMovement.Vertical);


        float xValue = Input.GetAxis("Horizontal");
        float yValue = Input.GetAxis("Vertical");

        return new Vector2(xValue, yValue);
    }

    public static bool isOnMobile => s_JoyLook != null;

    public static float Camera_X_Movement => Cam_X();

    public static float Camera_Y_Movement => Cam_Y();

    public static bool PressedPaused => ButtonPressProcessor("Pause");

    public static bool PressedInteracted => ButtonPressProcessor("Interact");

    public static bool PressedJump => ButtonPressProcessor("Jump");

    public static void ResetJoySticks()
    {
        if (!isOnMobile)
            return;

        s_JoyLook.ResetJoyStick();
        s_JoyMovement.ResetJoyStick();
    }
}
