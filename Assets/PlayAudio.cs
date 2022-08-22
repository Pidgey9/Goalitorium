using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayAudio : MonoBehaviour
{
    public AudioSource source;
    public IntVar goalNumber;
    private void Update()
    {
        if (goalNumber.value == 100)
        {
            source.Play();
        }
    }
}
