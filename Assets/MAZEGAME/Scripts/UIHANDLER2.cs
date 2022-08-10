using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UIHANDLER2 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.None;
    }
    public void Next()
    {

        Time.timeScale = 1;
        if (PlayerPrefs.GetInt("LEVEL", 1) == 1)
            SceneManager.LoadScene("Level1");
        else
            SceneManager.LoadScene("MainMenu");
    }
    public void Home()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene("MainMenuNew");
    }
    public void Retry()
    {
        Time.timeScale = 1;
        if (PlayerPrefs.GetInt("LEVEL", 1) == 1)
            SceneManager.LoadScene("Level1");
        else
            SceneManager.LoadScene("Level2");
    }
    // Update is called once per frame
    void Update()
    {

    }
}
