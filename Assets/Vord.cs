using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Vord : MonoBehaviour
{
    public IntVar goalNumber;
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.collider.CompareTag("Destroyer"))
        {
            Destroy(gameObject);
        }
        if (collision.collider.CompareTag("Victory"))
        {
            goalNumber.value++;
            Destroy (gameObject);
        }
    }
}
