using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SphereController : MonoBehaviour
{

    Rigidbody sphereRb;
    InputManager inputManager;
    SpawnManager spawnManager;

    void Start()
    {
        sphereRb = gameObject.GetComponent<Rigidbody>();
        inputManager = GameObject.Find("Canvas").GetComponent<InputManager>();
        spawnManager = GameObject.Find("SpawnManager").GetComponent<SpawnManager>();
        sphereRb.AddForce(Vector3.forward * int.Parse(inputManager.forceInputField.text));
    }

    void Update()
    {

    }





    private void OnCollisionEnter(Collision other) {

    }





}
