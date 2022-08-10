using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoundButtons : MonoBehaviour
{
    public Sprite SoundOn;
    public Sprite SoundOff;
    public SoundScript Sound;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void ToggleButton()
    {
        if(Sound.BackgroundSoundStatus==true)
        {
            Sound.BackgroundSoundStatus = false;
            GetComponent<Image>().sprite = SoundOff;
        }
        else
        {
            Sound.BackgroundSoundStatus =true;
            GetComponent<Image>().sprite = SoundOn;
        }
        Sound.ToggleSound();
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
