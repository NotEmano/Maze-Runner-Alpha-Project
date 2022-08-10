using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coins : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }
    private void OnCollisionStay(Collision collision)
    {
      

        if (collision.collider.gameObject.tag.Equals("Player"))
        {
            GameObject.Find("GameManager").GetComponent<AudioSource>().Play();
            
            GameManger.Coins++;
            Destroy(this.gameObject);
        }

    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
