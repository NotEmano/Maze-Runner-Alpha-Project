using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogBox : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Invoke("Exit", 1.5f);
    }
    void Exit()
    {
        Debug.Log("GAME QUIT");
        Application.Quit();
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
