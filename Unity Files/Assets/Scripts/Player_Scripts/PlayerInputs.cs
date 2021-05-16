using UnityEngine;
using System.Collections.Generic;

public class PlayerInputs : MonoBehaviour
{
    [SerializeField]
    private bool _isMobile = false;

    [SerializeField]
    private Joystick joyMovement, joyLook;

    private Dictionary<string, UI_InputButton> UI_mobileButtons;

    //private static Joystick s_JoyMovement, s_JoyLook;

    public static PlayerInputs Instance;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(this);
    }

    private void Start()
    {
        PrepareValues();
    }

    void PrepareValues()
    {
        if (_isMobile)
        {
            //s_JoyLook = joyLook;
            //s_JoyMovement = joyMovement;

            CreateButtonDictionary();
            return;
        }
    }

    private void OnDisable()
    {
        //s_JoyLook = null;
        //s_JoyMovement = null;
    }

    void CreateButtonDictionary()
    {
        UI_InputButton[] availableButtons = Resources.FindObjectsOfTypeAll<UI_InputButton>();
        UI_mobileButtons = new Dictionary<string, UI_InputButton>();

        foreach (UI_InputButton button in availableButtons)
            UI_mobileButtons.Add(button.idButton, button);
    }

    bool ButtonPressProcessor(string buttonToCheckPress)
    {
        if (isOnMobile)
        {
            if (UI_mobileButtons.ContainsKey(buttonToCheckPress))
                return UI_mobileButtons[buttonToCheckPress].isPressing;

            return false;
        }

        return Input.GetButtonDown(buttonToCheckPress);
    }

    float Cam_X()
    {
        if (isOnMobile)
        {
            return joyLook.Horizontal;
        }

        return Input.GetAxis("Mouse X");
    }

    float Cam_Y()
    {
        if (isOnMobile)
        {
            return joyLook.Vertical;
        }

        return Input.GetAxis("Mouse Y");
    }

    public Vector2 MoveInputs()
    {
        if (isOnMobile)
            return new Vector2(joyMovement.Horizontal, joyMovement.Vertical);


        float xValue = Input.GetAxis("Horizontal");
        float yValue = Input.GetAxis("Vertical");

        return new Vector2(xValue, yValue);
    }

    public bool isOnMobile => _isMobile;

    public float Camera_X_Movement => Cam_X();

    public float Camera_Y_Movement => Cam_Y();

    public bool PressedPaused => ButtonPressProcessor("Pause");

    public bool PressedInteracted => ButtonPressProcessor("Interact");

    public bool PressedJump => ButtonPressProcessor("Jump");

    public void ResetJoySticks()
    {
        if (!isOnMobile)
            return;

        joyLook.ResetJoyStick();
        joyMovement.ResetJoyStick();
    }
}
