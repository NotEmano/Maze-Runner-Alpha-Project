using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishPoint : MonoBehaviour
{
    public GameObject GateAnim;

    void Start()
    {
        
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            if (GameManagerNew.instance.IsAllItemsPicked == false)
                GameManagerNew.instance.ShowNotPickedUpItems();
            else
            {
                GateAnim.GetComponent<Animator>().enabled = true;
                SoundManager.instance.GateOpenSound.Play();
            }

        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag=="Player")
        {
            if (GameManagerNew.instance.IsAllItemsPicked==false)
              GameManagerNew.instance.ShowNotPickedUpItems();
            else
            {
                GateAnim.GetComponent<Animator>().enabled = true;
                SoundManager.instance.GateOpenSound.Play();
            }

        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
