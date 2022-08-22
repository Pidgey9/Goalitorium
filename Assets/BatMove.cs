using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BatMove : MonoBehaviour
{
    Rigidbody2D rb;
    float h;
    public int speed;
    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
    }
    private void Update()
    {
        h = Input.GetAxis("Horizontal2");
    }
    private void FixedUpdate()
    {
        rb.angularVelocity = h * speed;
    }
}
