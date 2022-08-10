using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelInstitater : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject LevelPrefab;

    void Start()
    {
        
    }
    private void OnEnable()
    {
        for(int i=0;i<20;i++)
        {
       
            GameObject btn = Instantiate(LevelPrefab, this.transform);
            btn.GetComponent<Level>().level = i + 1;
            btn.GetComponent<Level>().SetLevel();
 
        }
    }
    private void OnDisable()
    {
        int children = transform.childCount;
        for (int i = 0; i < children; ++i)
           Destroy(transform.GetChild(i));
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
