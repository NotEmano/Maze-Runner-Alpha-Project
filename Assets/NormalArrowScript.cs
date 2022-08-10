using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NormalArrowScript : MonoBehaviour
{
    // Start is called before the first frame update
    float speed = 3f;
    bool iscollided;
    void Start()
    {
        iscollided = true;
        Destroy(this.gameObject,0.1f);//new shorter arrow life


    }

    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log(collision.collider.gameObject.tag);
       if(collision.collider.gameObject.tag.Equals("Wall"))
        {
            Destroy(this.gameObject);
        }
    }
    // Update is called once per frame
    void Update()
    {
        if(iscollided)
        {

      
        if(transform.localEulerAngles.x==90 && transform.localEulerAngles.y == 0 && transform.localEulerAngles.z == 0 )
        {
            this.transform.position = new Vector3(this.transform.position.x + (speed * Time.deltaTime), this.transform.position.y, this.transform.position.z);
        }
        else if (transform.localEulerAngles.x == 90 && transform.localEulerAngles.y == 180 && transform.localEulerAngles.z == 0)
        {
            this.transform.position = new Vector3(this.transform.position.x - (speed * Time.deltaTime), this.transform.position.y, this.transform.position.z);
        }
         else if (transform.localEulerAngles.x == 90 && transform.localEulerAngles.y == 270 && transform.localEulerAngles.z == 0)
        {
            this.transform.position = new Vector3(this.transform.position.x , this.transform.position.y , this.transform.position.z + (speed * Time.deltaTime));
        }
        else
            this.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, this.transform.position.z - (speed * Time.deltaTime));
        }
    }
}
