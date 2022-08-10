using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SHOP : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void BuyNormalArrow()
    {
        if(GameManger.Coins>0)
        {
            GameManger.Coins--;
            GameManger.WOODENARROWQUANTITY++;
        }
    }
    public void BuyWaterArrow()
    {
        if (GameManger.Coins > 3)
        {
            GameManger.Coins= GameManger.Coins-3;
            GameManger.WATERARROWQUANTITY++;
        }
    }
    public void BuyMossArrow()
    {
        if (GameManger.Coins > 5)
        {
            GameManger.Coins = GameManger.Coins - 5;
            GameManger.MOSSARROWQUANTITY++;
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
