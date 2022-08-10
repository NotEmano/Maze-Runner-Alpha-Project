using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class Level : MonoBehaviour
{
    public Text LevelText;
    public int level;
    public Sprite LockSprite;


    // Start is called before the first frame update
    void Start()
    {
       
    }
    public Level(int l)
    {
        level = l;
    }
    public void SetLevel()
    {
        LevelText.text = level.ToString();
        int unlocklevel = PlayerPrefs.GetInt("UNLOCKEDLEVELS", 1);
        if (unlocklevel < level)
        {
            LevelText.gameObject.SetActive(false);
            this.GetComponent<Button>().image.sprite = LockSprite;
            this.GetComponent<Button>().interactable = false;
        }
    }
    public void LoadLevel()
    {
        PlayerPrefs.SetInt("LEVEL", level);
        SceneManager.LoadScene("Level"+level);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
