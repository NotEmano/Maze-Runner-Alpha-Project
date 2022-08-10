using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class MossArrow : MonoBehaviour
{
    // Start is called before the first frame update
    float speed = 0.02f;
    bool iscollided;
    public GameObject MossFloor;

    float[] Angles = new float[3];
    void Start()
    {

        Angles[0] = transform.localEulerAngles.x;
        Angles[1] = transform.localEulerAngles.y;
        Angles[2] = transform.localEulerAngles.z;

        Debug.Log("Position x:" + Angles[0]);
        Debug.Log("Position y:" + Angles[1]);
        Debug.Log("Position z:" + Angles[2]);
        iscollided = false;

    }

    private void OnCollisionEnter(Collision collision)
    {



        if ((collision.collider.gameObject.tag.Equals("WoodFloor") || collision.collider.gameObject.tag.Equals("MetalFloor")) && iscollided == false)
        {
            iscollided = true;
            GameObject temp = Instantiate(MossFloor, new Vector3(UnityEngine.Random.Range(-2, 2), MossFloor.transform.position.y, MossFloor.transform.position.y), Quaternion.identity);
            temp.transform.rotation = MossFloor.transform.rotation;
            //temp.transform.position= this.transform.position;




            if (transform.localEulerAngles.x == 0.60f && transform.localEulerAngles.y == 0.37 && transform.localEulerAngles.z == -0.37)
            {
                temp.transform.position = new Vector3(transform.position.x - 1, temp.transform.position.y, transform.position.z);
            }

            if (Angles[0] == 90 && Angles[1] > 60 && Angles[2] == 0)
            {
                Debug.Log("GOING INTO THHIS ");
                temp.transform.position = new Vector3(transform.position.x + 0.5f, temp.transform.position.y, transform.position.z );
            }
            //temp.transform.position = new Vector3(transform.position.x + 1, transform.position.y, transform.position.z);
        }

    }
    // Update is called once per frame
    void Update()
    {
        if (iscollided)
        {
            Destroy(this.gameObject);

        }
    }
}
