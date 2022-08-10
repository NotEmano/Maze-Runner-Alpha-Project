using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MazeRenderer : MonoBehaviour
{

    [SerializeField]
    [Range(1, 50)]
    private int width = 10;

    [SerializeField]
    [Range(1, 50)]
    private int height = 10;

    [SerializeField]
    private float size = 1f;

    [SerializeField]
    private Transform wallPrefab = null;

    [SerializeField]
    private Transform floorPrefab = null;


  


    // Start is called before the first frame update
    void Start()
    {
        width = GameManger.Rows;
        height = GameManger.Columns;
        var maze = MazeGenerator.Generate(width, height);
        Draw(maze);


        GenerateEndPoint();
        GameManger.PlayerPosition();
    }
    public void GenerateEndPoint()
    {
        
        GameObject[] walls = GameObject.FindGameObjectsWithTag("Wall");

        int End = UnityEngine.Random.Range(0, 3);
        // 0 is most left wall.
        // 1 is most right wall
        // 2 is most top wall
        // 3 is most below wall


        GameObject ToBeDestoroyed=null;
        bool endpointset = false;
        while(endpointset==false)
        {


            if (End == 0)
            {


                for (int i = 0; i < walls.Length; i++)
                {


                    if (walls[i].transform.localPosition.x == (-(GameManger.Columns/2+0.5f)))
                    {

                        if (Random.Range(0, 50) % 5 == 0)
                        {

                            ToBeDestoroyed=(walls[i]);
                            endpointset = true;
                            break;
                        }

                    }
                }
            }
            else if (End == 1)
            {


                for (int i = 0; i < walls.Length; i++)
                {


                    if (walls[i].transform.localPosition.x == (GameManger.Columns / 2-0.5f))
                    {

                        if (Random.Range(0, 50) % 5 == 0)
                        {

                            ToBeDestoroyed=(walls[i]);
                            endpointset = true;
                            break;
                        }

                    }
                }
            }
            else if (End == 2)
            {


                for (int i = 0; i < walls.Length; i++)
                {


                    if (walls[i].transform.localPosition.z == (GameManger.Rows / 2 - 0.5f))
                    {

                        if (Random.Range(0, 50) % 5 == 0)
                        {

                            ToBeDestoroyed=(walls[i]);
                            endpointset = true;
                            break;
                        }

                    }
                }
            }
            else if (End ==  3)
            {


                for (int i = 0; i < walls.Length; i++)
                {


                    if (walls[i].transform.localPosition.x == (-(GameManger.Rows / 2 + 0.5f)))
                    {

                        if (Random.Range(0, 50) % 5 == 0)
                        {

                            ToBeDestoroyed=(walls[i]);
                            endpointset = true;
                            break;
                        }

                    }
                }
            }
          

        }
        ToBeDestoroyed.GetComponent<MeshRenderer>().enabled = false;
        ToBeDestoroyed.tag = "ENDPOINT";
       
    }
    private void Draw(WallState[,] maze)
    {

        var floor = Instantiate(floorPrefab, transform);
        floor.localScale = new Vector3(width, 1, height);

        for (int i = 0; i < width; ++i)
        {
            for (int j = 0; j < height; ++j)
            {
                var cell = maze[i, j];
                var position = new Vector3(-width / 2 + i, 0, -height / 2 + j);

                if (cell.HasFlag(WallState.UP))
                {
                    var topWall = Instantiate(wallPrefab, transform) as Transform;
                    topWall.position = position + new Vector3(0, 0, size / 2);
                    topWall.localScale = new Vector3(size, topWall.localScale.y, topWall.localScale.z);
                }

                if (cell.HasFlag(WallState.LEFT))
                {
                    var leftWall = Instantiate(wallPrefab, transform) as Transform;
                    leftWall.position = position + new Vector3(-size / 2, 0, 0);
                    leftWall.localScale = new Vector3(size, leftWall.localScale.y, leftWall.localScale.z);
                    leftWall.eulerAngles = new Vector3(0, 90, 0);
                }

                if (i == width - 1)
                {
                    if (cell.HasFlag(WallState.RIGHT))
                    {
                        var rightWall = Instantiate(wallPrefab, transform) as Transform;
                        rightWall.position = position + new Vector3(+size / 2, 0, 0);
                        rightWall.localScale = new Vector3(size, rightWall.localScale.y, rightWall.localScale.z);
                        rightWall.eulerAngles = new Vector3(0, 90, 0);
                    }
                }

                if (j == 0)
                {
                    if (cell.HasFlag(WallState.DOWN))
                    {
                        var bottomWall = Instantiate(wallPrefab, transform) as Transform;
                        bottomWall.position = position + new Vector3(0, 0, -size / 2);
                        bottomWall.localScale = new Vector3(size, bottomWall.localScale.y, bottomWall.localScale.z);
                    }
                }
            }

        }

        for (int i = 0; i < width; i++)
        {
            var cell = maze[0,0];

        }
            
    }

    // Update is called once per frame
    void Update()
    {

    }
}
