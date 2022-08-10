using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    public bool isdebug;
    //-----Privates variables-----\\
    private Vector3 offset;
    //-----Publics variables-----\\
    [Header("Variables")]
    public Transform player;
    [Space]
    [Header("Position")]
    public float camPosX;
    public float camPosY;
    public float camPosZ;
    [Space]
    [Header("Rotation")]
    public float camRotationX;
    public float camRotationY;
    public float camRotationZ;
    [Space]
    [Range(0f, 10f)]
    public float turnSpeed;
    //-----Privates functions-----\\
    private void Start()
    {
        
        transform.rotation = Quaternion.Euler(camRotationX, camRotationY, camRotationZ);

        offset = new Vector3(player.position.x + camPosX, player.position.y + camPosY, player.position.z + camPosZ);


    }
    private void Update()
    {
        if (Time.timeScale == 0)
            return;

        if(isdebug)
        offset = new Vector3(player.position.x + camPosX, player.position.y + camPosY, player.position.z + camPosZ);

        //if (Input.GetMouseButton(0))
        //{
            offset = Quaternion.AngleAxis(Input.GetAxis("Mouse X") * turnSpeed, Vector3.up) * Quaternion.AngleAxis(0 * turnSpeed, Vector3.right) * offset;

            //player.rotation = Quaternion.Euler(0f, transform.rotation.y, transform.rotation.z);

            var rotationVector = transform.rotation.eulerAngles;
            rotationVector.z = 0;  //this number is the degree of rotation around Z Axis
            rotationVector.x = 0;  //this number is the degree of rotation around Z Axis

            player.rotation = Quaternion.Euler(rotationVector);
      //  }
        //player.rotation = Quaternion.Euler(0f, transform.rotation.y, 0);
        transform.position = player.position + offset;
    
            transform.LookAt(player.position);
        
        
       
    }
}
