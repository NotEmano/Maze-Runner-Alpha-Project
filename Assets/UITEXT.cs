using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UITEXT : MonoBehaviour
{
    public Text Level;
    public Slider Health;
    public Text WOODENARROW;
    public Text WATERARROW;
    public Text MOSSARROW;
    public Text Coin;
    public Text Heart;
    public Text EnemiesKilled;
    public Text RemainingEnemiesKilled;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Level.text = GameManger.Level.ToString();
        Health.value = GameManger.health;
        //Health.text = "Health :" + GameManger.health.ToString();
        WOODENARROW.text = GameManger.WOODENARROWQUANTITY.ToString();
        WATERARROW.text = GameManger.WATERARROWQUANTITY.ToString();
        MOSSARROW.text = GameManger.MOSSARROWQUANTITY.ToString();
        Coin.text = GameManger.Coins.ToString();
        Heart.text = GameManger.Hearts.ToString();
        EnemiesKilled.text = GameManger.TotalEnemiesKilled.ToString();
        RemainingEnemiesKilled.text = GameManger.ReaminingEnemiesKilled.ToString();

    }
}
