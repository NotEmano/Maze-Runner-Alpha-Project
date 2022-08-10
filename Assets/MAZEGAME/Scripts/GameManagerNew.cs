using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class GameManagerNew : MonoBehaviour
{
    public GameObject LevelCompletedPanel;
    public GameObject GamePausedPanel;
    public GameObject LevelFailedPanel;
    public GameObject GameCompletedPanel;



    public bool IsAllItemsPicked = false;
    public string[] KeysObjects;
    public Text[] Objectives;
    int NoObjectivePassed;

    public static GameManagerNew instance;
    public GameObject ExitObjective;
    public bool[] ObjectivesPassed;

    public float health = 100;
    public Image HealthBar;

    public Text SplashText;


    public float Timer = 0;
    public Text TimeText;
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        if (PlayerPrefs.GetInt("SOUND", 1) == 0)
            AudioListener.volume = 0;
        else
        {
            AudioListener.volume = PlayerPrefs.GetFloat("VOLUME", 1);
        }
    }

 
    public void SetTimer()
    {
        Timer -= Time.deltaTime;
        TimeText.text = ((int)(Timer)).ToString();

         int minutes = (int) Timer / 60;
        int seconds = (int)Timer % 60;

        TimeText.text = minutes + ":";
        if (seconds < 10)
            TimeText.text = TimeText.text + "0";
        TimeText.text = TimeText.text + seconds.ToString();

        if (Timer<20)
        {
            if (SoundManager.instance.WarningSound.isPlaying == false)
            {
                SoundManager.instance.WarningSound.Play();
            }
        }
          if(Timer<0)
        {
            LevelFailed();
        }
    }
    private void Awake()
    {
        if(instance==null)
        {
            instance = this;
        }
    }
    public void DecrementHealth(int H)
    {
        SoundManager.instance.BuzzerSound.Play();        health -= H;
        HealthBar.fillAmount = health / 100;
        if (health < 0)
            LevelFailed();
    }
    public void LevelCompleted()
    {
        if (PlayerPrefs.GetInt("LEVEL", 1) == 1)
            SceneManager.LoadScene("LevelFinished");
        else
            SceneManager.LoadScene("GameCompleted");
    }
    public void LevelFailed()
    {
        SceneManager.LoadScene("LevelFailed");

    }
    private void OnDisable()
    {
        Cursor.lockState = CursorLockMode.None;
        Time.timeScale = 1;
    }
    public void GamePaused()
    {
        Cursor.lockState = CursorLockMode.None;
        Time.timeScale = 0;
        GamePausedPanel.gameObject.SetActive(true);
    }
    public void Resume()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Time.timeScale = 1;
        GamePausedPanel.gameObject.SetActive(false);
    }
    public void ShowNotPickedUpItems()
    {
        SplashText.text = "You have not Picked Up Following Items :";
        for(int i=0;i<ObjectivesPassed.Length;i++)
        {
            if(ObjectivesPassed[i]==false)
            {
                SplashText.text = SplashText.text + KeysObjects[i]+" , ";
            }
        }
        SoundManager.instance.BuzzerSound.Play();
        SplashText.gameObject.SetActive(true);
        Invoke("TurnOffSplash", 5f);
    }
    public void Next()
    {
     
        Time.timeScale = 1;
        if (PlayerPrefs.GetInt("LEVEL", 1) == 1)
            SceneManager.LoadScene("Level2");
        else
            SceneManager.LoadScene("MainMenuNew");
    }
    public void Home()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene("MainMenuNew");
    }
    public void Retry()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
    public void TurnOffSplash()
    {
        SplashText.gameObject.SetActive(false);
    }
    public bool ObjectiveDone(int i,int condition)
    {
        if(condition!=-1)
        {
            if(ObjectivesPassed[condition]==false)
            {
                SplashText.gameObject.SetActive(true);
                SplashText.text = "You must picked up  Following Item First : "+KeysObjects[condition]+" , ";
                SoundManager.instance.BuzzerSound.Play();
                Invoke("TurnOffSplash", 5f);
                return false;
            }
          
        }
        NoObjectivePassed++;
        ObjectivesPassed[i] = true;
        Objectives[i].color = Color.green;

        if (NoObjectivePassed == Objectives.Length)
        {
            ExitObjective.gameObject.SetActive(true);
            IsAllItemsPicked = true;
            
        }
         return true;
    }
    // Update is called once per frame
    void Update()
    {
        SetTimer();
        if(Input.GetKey(KeyCode.Escape))
        {
            GamePaused();
        }
    }
}
