using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControllerNew : MonoBehaviour
{
    public Animator Anim;
    int horizontal;
    int vertical;
    float delay = 0.1f;
 
    void Start()
    {
        
    }
    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log("OBJECT:" + collision.gameObject.name);
    }
    // Update is called once per frame
    void Update()
    {
        horizontal = (int)Input.GetAxis("Horizontal");
        vertical = (int)Input.GetAxis("Vertical");
        Anim.SetInteger("Horizontal", horizontal);
        Anim.SetInteger("Vertical", vertical);

        //if (horizontal != 0 || vertical != 0)
        //{
        //    if (RunningSound.isPlaying == false)
        //        RunningSound.Play();
        //}
        //  else
        //    RunningSound.Stop();


        //Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.z, 1);
        //Vector3 lookPos = Camera.main.ScreenToWorldPoint(mousePos);
        //lookPos = lookPos - transform.position;
        //float angle = Mathf.Atan2(lookPos.z, lookPos.x) * Mathf.Rad2Deg;
        //transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);


    }
}
