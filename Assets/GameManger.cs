using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class GameManger : MonoBehaviour
{


    public static GameObject Player;
    public static GameObject Camera;
    public static int TorhcesQuantity;
    public static int GuardsQuantity;
    public static int WOODENARROWQUANTITY;
    public static int WATERARROWQUANTITY;
    public static int MOSSARROWQUANTITY;
    public static int Level = 3;
    public static float health = 100;
    public static int SoundProduced = 0;
    public static int Rows = 6;
    public static int Columns = 6;
    public static int Points = 0;
    public static int Hearts;
    public static bool isdying;
    public bool levelup;
    int height, width;
    public GameObject MazeRenderer;

    public static int Coins;
    private float attacktime = 1f;
    private float attackCounter = 1f;

    public Animator myAnim;

    public GameObject GameFinished;
    public GameObject LevelFinished;
    public GameObject Pause;
    public GameObject Shop;
    public AudioSource Clap;

    public static String GameState;


    public static int TotalTorches;
    public static int TotalEnemies;

    public static int TotalEnemiesKilled;
    public static int ReaminingEnemiesKilled;

    private void ResetValues()
    {
        TotalEnemiesKilled = 0;
        ReaminingEnemiesKilled = 2 + (1 * Level);
        Level = PlayerPrefs.GetInt("LEVEL", 1); ;
        levelup = false;
        Coins = PlayerPrefs.GetInt("COINS", 0);
        isdying = false;
        Rows = 4 + (2 * Level);
        Columns = 4 + (2 * Level);

        TotalTorches = 15 + (10 * Level);
        TotalEnemies = 1 + (2 * Level);

        TorhcesQuantity = 0;
        GuardsQuantity = 0;

        health = 100;

    }
    void DeleteAll()
    {
        Destroy(GameObject.FindGameObjectWithTag("Maze"));
        GameObject[] Metal = GameObject.FindGameObjectsWithTag("MetalFloor");
        GameObject[] Moss = GameObject.FindGameObjectsWithTag("MossFloor");

        for (int i = 0; i < Metal.Length; i++)
            Destroy(Metal[i]);
        for (int y = 0; y < Moss.Length; y++)
            Destroy(Moss[y]);
    }
    public void PlayAgain()
    {
     

        GameFinished.SetActive(false);
        DeleteAll();
        myAnim.SetBool("Death", false);
        Level = PlayerPrefs.GetInt("LEVEL", 1); ;
        Hearts = 3;
        WOODENARROWQUANTITY = 6;
        WATERARROWQUANTITY = 3;
        MOSSARROWQUANTITY = 3;
        StartLevel();
        GameState = "RUNNING";

    }

    public void PauseGame()
    {
        GameState = "PAUSED";
        Pause.SetActive(true);
        Time.timeScale = 0;

    }
    public void UnPauseGame()
    {

        Time.timeScale = 1;

        GameState = "RUNNING";
        Pause.SetActive(false);
    }

    public void OpenShop()
    {
        GameState = "PAUSED";
        Shop.SetActive(true);

    }
    public void CloseShop()
    {
        GameState = "RUNNING";
        Shop.SetActive(false);
    }
    public void NextLevel()
    {
      
        GameState = "RUNNING";
        LevelFinished.SetActive(false);
        Clap.Play();
        levelup = true;
        PlayerPrefs.SetInt("COINS", GameManger.Coins);
        DeleteAll();
        Level++;

        PlayerPrefs.SetInt("LEVEL", PlayerPrefs.GetInt("LEVEL", 1) + 1);
        StartLevel();
    }
    private void Update()
    {

        if (Input.GetKeyDown(KeyCode.K))
        {
            if (Shop.activeSelf)
            {
                GameState = "RUNNING";
                Shop.SetActive(false);
            }

            else
            {
                GameState = "PAUSED";
                OpenShop();
            }

        }

        if (health <= 0 && isdying == false)
        {
            Hearts--;

            attackCounter = attacktime;
            isdying = true;
            myAnim.SetBool("Death", true);




        }

        if (isdying)
        {
            Debug.Log("Attack Counter :" + attackCounter);
            attackCounter -= Time.deltaTime;
            if (attackCounter <= 0)
            {
                if (Hearts == 0)
                {
                   // ads.Showinterstetial();
                    GameFinished.SetActive(true);

                }
                else
                {
                    health = 100;
                    myAnim.SetBool("Death", false);
                    PlayerPosition();
                    isdying = false;
                }

            }

        }
    }
    System.Random random = new System.Random();
    public static bool MazeGenerated = false;


    public GameObject MetalFloor;
    public GameObject MossFloor;

    public void StartLevel()
    {
        WOODENARROWQUANTITY = WOODENARROWQUANTITY + 6;
        WATERARROWQUANTITY = WATERARROWQUANTITY + 1;
        MOSSARROWQUANTITY = MOSSARROWQUANTITY + 1;

        Instantiate(MazeRenderer, MazeRenderer.transform.position, Quaternion.identity);
        ResetValues();
        height = (Rows / 2 - 1);
        width = (Columns / 2 - 1);
        GenerateMetalFloor();
        GenerateMossFloor();
        GenerateEndPoint();
        Player = GameObject.FindGameObjectWithTag("Player");
        Camera = GameObject.FindGameObjectWithTag("MainCamera");
        GameState = "RUNNING";


    }
    void Start()
    {
        Hearts = 3;
        WOODENARROWQUANTITY = 0;
        WATERARROWQUANTITY = 2;
        MOSSARROWQUANTITY = 2;
        StartLevel();
    }
    public static void PlayerPosition()
    {

        GameObject[] walls = GameObject.FindGameObjectsWithTag("Wall");

        do
        {


            System.Random random = new System.Random();
            int num = random.Next(walls.Length);

            GameObject wall = GameObject.FindGameObjectsWithTag("Wall")[num];
            Player.transform.position = new Vector3(wall.transform.position.x + 1, Player.transform.position.y, Player.transform.position.z);
            Camera.transform.position = new Vector3(Player.transform.position.x, Camera.transform.position.y, Camera.transform.position.z);
        } while (Player.transform.position.x < (-((Columns / 2) + 1)) || Player.transform.position.x > ((Columns / 2) - 1) || Player.transform.position.z < (-(Rows / 2 + 1)) || Player.transform.position.z > ((Rows / 2) - 1));
    }

    public void GenerateMetalFloor()
    {
        int i = height;
        while (i > -height)
        {

            GameObject temp = Instantiate(MetalFloor, new Vector3(random.Next(-width, width), MetalFloor.transform.position.y, i), Quaternion.identity); ;
            temp.transform.rotation = MetalFloor.transform.rotation;
            i = i - 2;
        }

    }
    public void GenerateMossFloor()
    {
        int i = height;
        while (i > -height)
        {

            GameObject temp = Instantiate(MossFloor, new Vector3(random.Next(-width, width), MossFloor.transform.position.y, i), Quaternion.identity);
            temp.transform.rotation = MossFloor.transform.rotation;
            i = i - 2;
        }

    }

    public void GenerateEndPoint()
    {

        GameObject[] walls = GameObject.FindGameObjectsWithTag("Wall");

        int End = UnityEngine.Random.Range(0, 3);
        // 0 is most left wall.
        // 1 is most right wall
        // 2 is most top wall
        // 3 is most below wall

        //
        //if(End==0)
        // {
        for (int i = 0; i < walls.Length; i++)
        {


            if (walls[i].transform.localPosition.x == (3.5f))
            {
                walls[i].GetComponent<MeshRenderer>().enabled = false;
                walls[i].tag = "ENDPOINT";
                //Destroy(walls[i]);
            }
        }
        // }
    }
}
