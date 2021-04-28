using UnityEngine;

public class PickUpObject : MonoBehaviour, InteractableObject
{
    [SerializeField]
    private string objectName;

    [SerializeField]
    private Transform pickUpLocation;

    private Rigidbody rb;
    private bool canPickUp = true;

    private Transform previousParent;


    public bool IsPickingUp => rb.isKinematic;

    private void Awake()
    {
        Initialize();
    }

    private void Initialize()
    {
        rb = GetComponent<Rigidbody>();

        if (pickUpLocation == null)
            pickUpLocation = GameObject.FindGameObjectWithTag("pickUpHolder").transform;
    }

    public void Interact()
    {
        PickObject();
    }

    public void ActivateInteractionFeedback()
    {
        UI_Manager.Instance.Set_TipText(objectName);
    }

    public void DeactivateInteractionFeedback()
    {
        UI_Manager.Instance.Set_TipText(string.Empty);
    }


    public void DeativatePìckUp() 
    {
        canPickUp = false;
    }

    public void AllowPickUp()
    {
        canPickUp = true;
    }

    private void OnMouseUp()
    {
        LetGoObject();
    }

    void PickObject() 
    {
        if (!canPickUp)
            return;

        rb.isKinematic = true;
        transform.position = pickUpLocation.position;
        previousParent = transform.parent;
        transform.parent = pickUpLocation;
    }

    public void LetGoObject()
    {
        if (!canPickUp)
            return;

        rb.isKinematic = false;
        transform.parent = previousParent;
    }
}
