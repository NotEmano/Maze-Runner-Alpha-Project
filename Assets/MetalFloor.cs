using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MetalFloor : MonoBehaviour
{
    public AudioSource audio;

    // Start is called before the first frame update
    void Start()
    {
        
    }
    private void OnCollisionStay(Collision collision)
    {
       // GameManger.SoundProduced = 10;
        if (collision.collider.gameObject.tag.Equals("MossFloor"))
            {
            Destroy(gameObject);
        }
           
        else if (collision.collider.gameObject.tag.Equals("Player") && (!audio.isPlaying))
        {
            audio.Play();
        }

    }
    private void OnCollisionExit(Collision collision)
    {
       
        if (collision.collider.gameObject.tag.Equals("Player"))
        {
            audio.Stop();
        }

    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
