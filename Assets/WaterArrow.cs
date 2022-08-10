using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterArrow : MonoBehaviour
{
    GameObject Target;
    float speed = 2f;
    bool iscollided;
    GameObject[] Torches;
    int best;
    Transform bestTarget = null;
    // Start is called before the first frame update
    void Start()
    {
        iscollided = false;
         Torches = GameObject.FindGameObjectsWithTag("Torch");
        Vector3 min = Torches[0].transform.position;
         bestTarget = null;

        float closestDistanceSqr = Mathf.Infinity;
        Vector3 currentPosition = transform.position;
        for(int i=0;i<Torches.Length;i++)
        {
            Transform potentialTarget = Torches[i].transform;
            Vector3 directionToTarget = potentialTarget.position - currentPosition;
            float dSqrToTarget = directionToTarget.sqrMagnitude;
            if (dSqrToTarget < closestDistanceSqr)
            {
                closestDistanceSqr = dSqrToTarget;
                bestTarget = potentialTarget;
                best = i;
            }
        }
        Vector3 targetDirection = bestTarget.position - transform.position;
        Vector3 newDirection = Vector3.RotateTowards(transform.position, targetDirection, speed * Time.deltaTime, 2f);
        transform.rotation = Quaternion.EulerRotation(newDirection);
    }
    private void OnCollisionEnter(Collision collision)
    {
        
        if (collision.collider.gameObject.tag.Equals("Wall"))
        {
           
            Vector3 Distance = this.transform.position - bestTarget.position;
            //Debug.Log("DISTANCE :" + Distance);
            if(Distance.x>=-0.1 && Distance.x <= 3 && Distance.y >= -1 && Distance.y <= 3&&Distance.z >= -1 && Distance.z < 3)
            {
                Torches[best].transform.Find("Flickering_Light").gameObject.SetActive(false);
                Torches[best].transform.Find("Glow").gameObject.SetActive(false);
                Torches[best].transform.Find("Flames_Particles").gameObject.SetActive(false);
                Torches[best].transform.Find("Smoke_Particles").gameObject.SetActive(false);

            }
          
            Destroy(this.gameObject);
        }
    }
    // Update is called once per frame
    void Update()
    {
        if(!iscollided)
        {
            Vector3 targetDirection = bestTarget.position - transform.position;

            transform.position = Vector3.MoveTowards(transform.position, bestTarget.transform.position, speed * Time.deltaTime);
          
        



        }
    }
}
