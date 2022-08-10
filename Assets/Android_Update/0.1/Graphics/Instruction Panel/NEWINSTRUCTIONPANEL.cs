using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NEWINSTRUCTIONPANEL : MonoBehaviour
{
    public GameObject[] Panels;
    public GameObject LeftButton;
    public GameObject RightButton;
    int currentPanel = 0;
    public void Left()
    {
        Panels[currentPanel].SetActive(false);
        currentPanel--;
        Panels[currentPanel].SetActive(true);


        RightButton.gameObject.SetActive(true);
        if (currentPanel == 0)
        {
            LeftButton.gameObject.SetActive(false);
        }
    }

    public void Right()
    {
        Panels[currentPanel].SetActive(false);
        currentPanel++;
        Panels[currentPanel].SetActive(true);

        LeftButton.gameObject.SetActive(true);
        if (currentPanel == Panels.Length - 1)
        {
            RightButton.gameObject.SetActive(false);
        }
    }
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
}
