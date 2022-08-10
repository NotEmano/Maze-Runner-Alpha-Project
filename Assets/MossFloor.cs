using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MossFloor : MonoBehaviour
{
    public AudioSource audio;


    // Start is called before the first frame update
    void Start()
    {
        
    }
    private void OnCollisionStay(Collision collision)
    {
        GameManger.SoundProduced = 0;
       
        if (collision.collider.gameObject.tag.Equals("MetalFloor"))
        {
            Destroy(collision.collider.gameObject);
        }
       
    }
    private void OnCollisionExit(Collision collision)
    {

     
       

    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
