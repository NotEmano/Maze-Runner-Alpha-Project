using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    public Transform Target;
    public float smoothing;

    
    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void LateUpdate()
    {

  

        if ( transform.position!=Target.position)
        {
            Vector3 targetposition = new Vector3(Target.transform.position.x, transform.position.y, Target.transform.position.z);

            // -3.5= -height(12)/2+3;
            // 2.5= hight/2-3

            //height and width=12

            int x = (GameManger.Columns / 2) - 1;
            int z = (GameManger.Rows / 2);

            targetposition.x = Mathf.Clamp(targetposition.x, -(x+0.8f), (x-0.1f));
            targetposition.z = Mathf.Clamp(targetposition.z, -(z+0.14f), (z-0.8f));

            //  targetposition.z = Mathf.Clamp(transform.position.z,minPosition.z, maxPosition.z);
            transform.position = Vector3.Lerp(transform.position, targetposition, smoothing);
        }
    }
}
