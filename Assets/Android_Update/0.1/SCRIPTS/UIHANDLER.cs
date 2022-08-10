using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIHANDLER : MonoBehaviour
{
    public AudioSource ButtonSound;
    public Text[] CoinsText;


    public void PlayButtonClickSound()
    {
        ButtonSound.Play();
    }
    // Start is called before the first frame update
    void Start()
    {
        if (PlayerPrefs.GetInt("SOUND", 1) == 0)
            AudioListener.volume = 0;
        else
        {
            AudioListener.volume = PlayerPrefs.GetFloat("VOLUME", 1);
        }
    }
    public void Q()
    {
        Application.Quit();
    }
  

    // Update is called once per frame
    void Update()
    {
        
    }
}
