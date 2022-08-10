using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Obstacle : MonoBehaviour
{
    public Transform[] Positions;
    int currentPosition;
    public float speed = 1.0f;

    void Start()
    {
        currentPosition = 0;
    }
    private void OnTriggerEnter(Collider other)
    {
       
    }
    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag=="Player")
            {

            GameManagerNew.instance.DecrementHealth(30);
            }
    }
    // Update is called once per frame
    void Update()
    {
        var step = speed * Time.deltaTime; // calculate distance to move
        transform.position = Vector3.MoveTowards(transform.position, Positions[currentPosition].position, step);

        // Check if the position of the cube and sphere are approximately equal.
        if (Vector3.Distance(transform.position, Positions[currentPosition].position) < 0.001f)
        {
            currentPosition++;
            if (currentPosition == Positions.Length)
                currentPosition = 0;

        }
    }
}
