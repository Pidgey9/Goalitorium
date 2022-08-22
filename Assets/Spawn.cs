using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawn : MonoBehaviour
{
    public GameObject Particules;
    private int count;
    public int cadence;
    private void Awake()
    {
        count = 0;
    }
    private void Update()
    {
        if (count % cadence == 0)
        {
            Instantiate(Particules, transform);
        }
        count++;
    }
}    
