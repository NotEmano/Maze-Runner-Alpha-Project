using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundScript : MonoBehaviour
{
    public bool BackgroundSoundStatus;
    public AudioSource BgMusic;
    // Start is called before the first frame update
    void Start()
    {
        BackgroundSoundStatus = true;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void ToggleSound()
    {
        if (BackgroundSoundStatus)
        {
            BgMusic.Play();
        }
        else
            BgMusic.Pause();

    }
}
