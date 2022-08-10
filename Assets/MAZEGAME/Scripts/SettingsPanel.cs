using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class SettingsPanel : MonoBehaviour
{
    public Slider VolumeSlider;
    public Toggle Sound;
    void Start()
    {
        
    }
    private void OnEnable()
    {
        if (PlayerPrefs.GetInt("SOUND", 1) == 0)
            Sound.isOn = false;

        VolumeSlider.value = PlayerPrefs.GetFloat("VOLUME", 1);
    }
    public void SwitchSound()
    {
        if (Sound.isOn == true)
        {
            PlayerPrefs.SetInt("SOUND", 1);
            AudioListener.volume = PlayerPrefs.GetFloat("VOLUME", 1);
        }
          
        else
        {
            PlayerPrefs.SetInt("SOUND", 0);
            AudioListener.volume = 0;
        }
         

    }
    public void SwitchVolume()
    {
        PlayerPrefs.SetFloat("VOLUME", VolumeSlider.value);
        if (PlayerPrefs.GetInt("SOUND",1)==1)
        AudioListener.volume = PlayerPrefs.GetFloat("VOLUME", 1);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
