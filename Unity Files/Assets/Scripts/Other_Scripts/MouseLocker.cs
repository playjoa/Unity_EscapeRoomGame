using UnityEngine;

public static class MouseLocker
{
    public static void LockMouse() 
    {
        if (PlayerInputs.Instance.isOnMobile)
            return;

        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }

    public static void FreeMouse()
    {
        if (PlayerInputs.Instance.isOnMobile)
            return;

       Cursor.lockState = CursorLockMode.None;
       Cursor.visible = true;
    }
}
