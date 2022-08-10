using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wall : MonoBehaviour
{
    public GameObject Torch;
    public GameObject Enemy;
    public GameObject Coin;

    // Start is called before the first frame update
    void Start()
    {
        bool isdestroyed = false;
        float xd, y, z;
        xd = transform.rotation.x;
        y = transform.rotation.y;
        z = transform.rotation.z;

        float xposition, yposition, zposition;
        xposition = transform.position.x;
        yposition = transform.position.y;
        zposition = transform.position.z;

        int x;



        if (GameManger.TorhcesQuantity < GameManger.TotalTorches)
        {


            if (!(xd == 0 && y == 0 && z == 0 && zposition != (GameManger.Rows / 2 - 0.5f)))
            {
                Destroy(Enemy.gameObject);
                isdestroyed = true;
            }

            if (this.transform.position.x != -(GameManger.Rows / 2 - 0.5f) && this.transform.position.x != (GameManger.Rows / 2))
            {

                x = Random.Range(0, 1000);
      
                if (x%2==0 && zposition != (GameManger.Rows / 2 - 0.5f))
                {
                    GameManger.TorhcesQuantity++;
                    Torch.SetActive(true);
                    if (!isdestroyed && GameManger.GuardsQuantity < GameManger.TotalEnemies)
                    {
                       
                        GameManger.GuardsQuantity++;
                        Enemy.SetActive(true);
                   

                    }
                    x = Random.RandomRange(0, 1000);
                    if (x % 3 == 0)
                        Coin.SetActive(true);
                    else
                        Destroy(Coin);
                }
                else
                {
                    Destroy(Torch);
                    if(!isdestroyed)
                        Destroy(Enemy);
                    Destroy(Coin);
                }

            }
            else
            {
                Destroy(Torch);
                if (!isdestroyed)
                    Destroy(Enemy);
                Destroy(Coin);
            }

        }
        else
        {
            Destroy(Torch);

            if (!isdestroyed)
                Destroy(Enemy);
            Destroy(Coin);
        
    
        }
    
         
        
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
