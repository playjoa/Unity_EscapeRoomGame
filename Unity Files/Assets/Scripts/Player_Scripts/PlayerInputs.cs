using UnityEngine;

public static class PlayerInputs
{
    public static Vector2 MoveInputs()
    {
        float xValue = Input.GetAxis("Horizontal");
        float yValue = Input.GetAxis("Vertical");

        return new Vector2(xValue, yValue);
    }

    public static float Camera_X_Movement() => Input.GetAxis("Mouse X");

    public static float Camera_Y_Movement() => Input.GetAxis("Mouse Y");

    public static bool PressedPaused() => Input.GetKeyDown(KeyCode.Escape);

    public static bool PressedInteracted() => Input.GetMouseButtonDown(0);

    public static bool PressedJump() => Input.GetButtonDown("Jump");
}
