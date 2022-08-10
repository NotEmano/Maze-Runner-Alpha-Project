using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collectibles : MonoBehaviour
{
    public int previousCollectilbleDependent=-1;
    public int CurrentCollectible;

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag=="Player")
        {
            SoundManager.instance.PickUpSound.Play();
            if(FindObjectOfType<GameManagerNew>().ObjectiveDone(CurrentCollectible, previousCollectilbleDependent))
                    this.gameObject.SetActive(false);
        }
    }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
