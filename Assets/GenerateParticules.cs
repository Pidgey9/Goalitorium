using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateParticules : MonoBehaviour
{
    public GameObject Particules;
    public byte rayon;
    private void Update()
    {
        Vector2 position = Random.insideUnitCircle * rayon;
        Instantiate(Particules, position, Quaternion.identity);
    }
}
