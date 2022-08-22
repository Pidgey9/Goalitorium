using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GetGreen : MonoBehaviour
{
    public MeshRenderer[] colorChild;
    MeshRenderer color;
    public IntVar goalNumber;
    public int numberGreen;
    private void Awake()
    {
        color = GetComponent<MeshRenderer>();
        colorChild = GetComponentsInChildren<MeshRenderer>();
    }
    private void Update()
    {
        if (goalNumber.value > numberGreen)
        {
            color.material = colorChild[1].material;
        }
    }
}
