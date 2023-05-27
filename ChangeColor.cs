using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeColor : MonoBehaviour
{
    public Renderer sphereRenderer;
    public GameObject sphere;

   
  
    
    void Start()
    {
        sphereRenderer = sphere.GetComponent<Renderer>();
    }

    
    void Update()
    {
        
    }

    public void ChangeMaterial()
    {

        sphereRenderer.material.color = Random.ColorHSV();

    }
}