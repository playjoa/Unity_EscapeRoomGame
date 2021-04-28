using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    [SerializeField]
    private Transform playerTransform, cameraTranform;

    [SerializeField]
    [Range(25f, 150f)]
    private float mouseSensX = 75f, mouseSensY = 75f;

    [SerializeField]
    private float minClampVertical = -60, maxClampHorizontal = 90;

    private float verticalRotation = 0;

    private void Update()
    {
        if (!GameState.IsPlayingFPS())
            return;

        CameraHorizontalMovement();
        CameraVerticalMovement();
    }

    void CameraVerticalMovement()
    {
        if (cameraTranform == null)
            return;

        verticalRotation -= Y_ValueWithSens();
        verticalRotation = RotationClamped(verticalRotation);

        cameraTranform.localRotation = Quaternion.Euler(verticalRotation, 0f, 0f);
    }

    void CameraHorizontalMovement()
    {
        if (playerTransform == null)
            return;

        playerTransform.Rotate(Vector3.up * X_ValueWithSens());
    }

    public void OverrideLookAt(Transform targetToLook)
    {
        cameraTranform.LookAt(targetToLook);
    }

    float X_ValueWithSens() 
    {
        return PlayerInputs.Camera_X_Movement() * Time.deltaTime * mouseSensX;
    }

    float Y_ValueWithSens()
    {
        return PlayerInputs.Camera_Y_Movement() * Time.deltaTime * mouseSensY;
    }

    float RotationClamped(float refRotation) 
    {
        return Mathf.Clamp(refRotation, minClampVertical, maxClampHorizontal);
    }
}
