using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveGoal : MonoBehaviour
{
    int count;
    Rigidbody2D rb;
    public int speed;
    private void Awake()
    {
        count = 0;
        rb = GetComponent<Rigidbody2D>();
    }
    private void FixedUpdate()
    {
        if (count % 100 < 49)
        {
            rb.velocity = Vector2.up * speed;
        }
        if(count % 100 > 49)
        {
            rb.velocity = Vector2.down * speed;
        }
        count++;
    }
}
