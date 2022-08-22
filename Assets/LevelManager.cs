using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    public IntVar goalNumber;
    private void Awake()
    {
        goalNumber.value = 0;
    }
}
