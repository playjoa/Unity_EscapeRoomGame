using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    [SerializeField]
    private Transform playerTransform, groundChecker;

    [SerializeField]
    private CharacterController controllerPlayer;

    [SerializeField]
    [Range(2f, 10f)]
    private float playerHorizontalSpeed = 8;

    [SerializeField]
    private bool useGravity = true;

    [SerializeField]
    [Range(-20f, -9.8f)]
    private float gravityValue = -10;

    [SerializeField]
    [Range(0.1f, 1f)]
    private float groundDistance = 0.5f;

    [SerializeField]
    private LayerMask groundMask;

    [SerializeField]
    private bool canJump = true;

    [SerializeField]
    private float jumpHeight = 2;

    private Vector3 gravityVelocity;
    private bool isGrounded;

    private void Update()
    {
        if (!GameState.IsPlayingFPS())
            return;

        MovePlayer();
        CalculateGravity();
        ProcessJumping();
    }
    void MovePlayer()
    {
        if (playerTransform == null)
            return;

        controllerPlayer.Move(PlayerMovementDirection());
    }

    void CalculateGravity() 
    {
        if (!useGravity)
            return;

        if (groundChecker == null)
            return;

        isGrounded = CheckIfGrounded();

        ResetingGravityIfGrounded();
        ApplyGravity();
    }

    void ProcessJumping()
    {
        if (!canJump)
            return;

        if (PlayerInputs.PressedJump() && isGrounded)      
            gravityVelocity.y = JumpForce();      
    }

    float JumpForce()
    {
        return Mathf.Sqrt(jumpHeight * -2f * gravityValue);
    }

    void ApplyGravity()
    {
        gravityVelocity.y += gravityValue * Time.deltaTime;
        controllerPlayer.Move(gravityVelocity * Time.deltaTime);
    }

    void ResetingGravityIfGrounded()
    {
        if (isGrounded && gravityVelocity.y < 0)
            gravityVelocity.y = -1.5f;
    }

    bool CheckIfGrounded()
    {
        return Physics.CheckSphere(groundChecker.position, groundDistance, groundMask);
    }

    Vector3 PlayerMovementDirection()
    {
        Vector3 baseDirection = playerTransform.right * PlayerInputs.MoveInputs().x +
                                playerTransform.forward * PlayerInputs.MoveInputs().y;

        baseDirection *= playerHorizontalSpeed * Time.deltaTime;

        return baseDirection;
    }
}
