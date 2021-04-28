using UnityEngine;

public static class MouseLocker
{
    public static void LockMouse() 
    {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
    }

    public static void FreeMouse()
    {

        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
    }
}
