using UnityEngine;

public class VirtualWeight : MonoBehaviour
{
    [Header("Weight Settings")]
    public float objectMass = 5.0f; // Higher = heavier feel
    public float dragStrength = 10.0f;
    public float accelerationSmoothness = 0.12f;

    private Vector3 _velocity = Vector3.zero;
    private Vector3 _targetPosition;
    private Camera _mainCam;

    void Start() {
        _mainCam = Camera.main;
    }

    void Update() {
        // 1. Get Mouse Position in 3D Space
        Ray ray = _mainCam.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out RaycastHit hit)) {
            _targetPosition = hit.point;
        }

        // 2. Physics Calculation (The "Weight" Math)
        // We use SmoothDamp to simulate the effort required to move mass
        transform.position = Vector3.SmoothDamp(
            transform.position, 
            _targetPosition, 
            ref _velocity, 
            accelerationSmoothness * objectMass // Mass scales the delay
        );

        // 3. Procedural Tilt
        // Heavy objects tilt away from the direction of movement
        float tiltAngle = _velocity.x * -2.0f; 
        Quaternion targetRotation = Quaternion.Euler(0, 0, tiltAngle);
        transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, Time.deltaTime * 5f);
    }
}
