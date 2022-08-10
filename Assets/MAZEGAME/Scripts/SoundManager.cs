using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public static SoundManager instance;
    public AudioSource PickUpSound;

    public AudioSource BuzzerSound;
    public AudioSource GateOpenSound;
    public AudioSource WarningSound;
    public AudioSource AllObjectiveCompleteSound;

    private void Awake()
    {
        if (instance == null)
            instance = this;
    }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
