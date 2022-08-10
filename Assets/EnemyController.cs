using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class EnemyController : MonoBehaviour
{
    public GameObject TORCH;

    public float Health;

    private Animator myAnim;
    private Transform target;
    public Transform HomePosition;
    public Transform Sword;
    public bool IsTouchingWall;
    public bool MoveTowardsEnemy;



    public Slider SliderHealth;


    [SerializeField]
    private float speed;

    [SerializeField]
    private float maxrange;
    [SerializeField]
    private float minrange;

    public bool Torchwet;
    // Start is called before the first frame update
    void Start()
    {
        MoveTowardsEnemy = false;
        IsTouchingWall = false;
        Torchwet = false;
        Health = 100;
        myAnim = GetComponent<Animator>();
        target = GameObject.FindGameObjectWithTag("Player").transform;
        //HomePosition = this.transform;

    }


    private void OnCollisionEnter(Collision collision)
    {

        if (collision.collider.gameObject.tag.Equals("NormalArrow"))
        {
            MoveTowardsEnemy = true;
            Health = Health - 20;
        }
        if (collision.collider.gameObject.tag.Equals("Wall"))
        {

            MoveTowardsEnemy = false;
            IsTouchingWall = true;
        }
        else
            IsTouchingWall = false;
    }



    // Update is called once per frame

    void Update()
    {
        SliderHealth.value = Health;

        if (TORCH == null || !TORCH.activeSelf)
        {


            int best = 0;
            GameObject[] Torches = GameObject.FindGameObjectsWithTag("Torch");
            float closestDistanceSqr = Mathf.Infinity;
            Vector3 currentPosition = transform.position;
            for (int i = 0; i < Torches.Length; i++)
            {
                if (Torches[i].transform.Find("Flames_Particles").gameObject.activeSelf)
                {
                    Transform potentialTarget = Torches[i].transform;
                    Vector3 directionToTarget = potentialTarget.position - currentPosition;
                    float dSqrToTarget = directionToTarget.sqrMagnitude;
                    if (dSqrToTarget < closestDistanceSqr)
                    {
                        closestDistanceSqr = dSqrToTarget;
                        HomePosition = potentialTarget;
                        best = i;
                    }
                }

            }
            TORCH = Torches[best].transform.Find("Flames_Particles").gameObject;
            MoveTowardsEnemy = true;
        }
        if (Health < 0)
        {
            if (GameManger.TotalEnemiesKilled < GameManger.ReaminingEnemiesKilled)
                GameManger.TotalEnemiesKilled++;
            Destroy(this.gameObject);
        }


        if (GameManger.GameState.Equals("RUNNING"))
        {
            if (Vector3.Distance(target.position, transform.position) <= minrange && GameManger.isdying == false)

            {
                if (PlayerController.isAttacking == true)
                {
                    Debug.Log("ATTACKING WITH SWORD");
                    Health = Health - 0.8f;
                }

                myAnim.SetBool("isAtacking", true);
                if (GameManger.SoundProduced == 5)
                    GameManger.health = GameManger.health - 0.3f;
                else if (GameManger.SoundProduced == 10)
                    GameManger.health = GameManger.health - 1f;

                if (GameManger.health < 0)
                    GameManger.health = 0;
            }
            else
            {
                myAnim.SetBool("isAtacking", false);
            }


            // IsTouchingWall == true || ( GameManger.SoundProduced == 0) ||



            if ( (Vector3.Distance(target.position, transform.position) >= maxrange && Vector3.Distance(transform.position, HomePosition.position) > minrange))
                GoHome();

            else if (MoveTowardsEnemy || Vector3.Distance(target.position, transform.position) <= maxrange && Vector3.Distance(target.position, transform.position) >= minrange && GameManger.SoundProduced != 0)
                FollowPlayer();
        }
        //&& Vector3.Distance(transform.position, HomePosition.position) > 0.1

    }

    public void FollowPlayer()
    {

        myAnim.SetBool("isMoving", true);
        myAnim.SetFloat("moveX", target.position.x - transform.position.x);
        myAnim.SetFloat("moveY", target.position.z - transform.position.z);

        transform.position = Vector3.MoveTowards(transform.position, target.transform.position, speed * Time.deltaTime);


    }
    public void GoHome()
    {
        if (IsTouchingWall == false)
        {
            myAnim.SetBool("isMoving", true);
            myAnim.SetFloat("moveX", HomePosition.position.x - transform.position.x);
            myAnim.SetFloat("moveY", HomePosition.position.z - transform.position.z);
            transform.position = Vector3.MoveTowards(transform.position, HomePosition.transform.position, speed * Time.deltaTime);

            if (Vector3.Distance(transform.position, HomePosition.position) < 0.3)
                myAnim.SetBool("isMoving", false);
        }
        else
            myAnim.SetBool("isMoving", false);

    }
}
