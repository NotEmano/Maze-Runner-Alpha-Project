using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    private Rigidbody myRB;
    private Animator myAnim;
    public float speed;

    public GameObject NormalArrow;
    public GameObject WaterArrow;
    public GameObject MossArrow;

    private float attacktime = .20f;
    private float attackCounter = .20f;
    public static bool isAttacking = true;

    public VariableJoystick variableJoystick;
    public GameObject LevelFinished;
    void Start()
    {
        speed = 0.7f;
        myRB = GetComponent<Rigidbody>();
        myAnim = GetComponent<Animator>();
        myAnim.SetFloat("moveY", 0);
        myAnim.SetFloat("moveX", 0);
    }

    private void OnCollisionStay(Collision collision)
    {

        
        if (collision.collider.gameObject.tag.Equals("ENDPOINT"))
        {
            GameManger.GameState = "PAUSED";
            LevelFinished.SetActive(true);

            /*
            if (GameManger.TotalEnemiesKilled == GameManger.ReaminingEnemiesKilled)
            {
                GameManger.GameState = "PAUSED";
                LevelFinished.SetActive(true);
            }
            */
        }
        
        if (collision.collider.gameObject.tag.Equals("MossFloor"))
            GameManger.SoundProduced = 0;
        else if (collision.collider.gameObject.tag.Equals("MetalFloor"))
            GameManger.SoundProduced = 10;
       
            else if (collision.collider.gameObject.tag.Equals("WoodFloor"))
            GameManger.SoundProduced = 5;


    }
    public void AttackWithKnife()
    {
        attackCounter = attacktime;
        myAnim.SetBool("isPlayerAttacking", true);
        isAttacking = true;

    }
    public void GenerateWoodenArrow()
    {
        if (GameManger.WOODENARROWQUANTITY > 0)
        {

            GameManger.WOODENARROWQUANTITY--;
            GameObject temp;
            if (myAnim.GetFloat("lastMoveY") < 0)
            {
                temp = Instantiate(NormalArrow, new Vector3(this.transform.position.x, this.transform.position.y, this.transform.position.z - 0.2f), Quaternion.identity);
                temp.transform.Rotate(90, 90, 0);
            }

            else if (myAnim.GetFloat("lastMoveX") < 0)
            {
                temp = Instantiate(NormalArrow, new Vector3(this.transform.position.x - 0.2f, this.transform.position.y, this.transform.position.z), Quaternion.identity);
                temp.transform.Rotate(90, 180, 0);
            }

            else if ((myAnim.GetFloat("lastMoveX") > 0))
            {
                temp = Instantiate(NormalArrow, new Vector3(this.transform.position.x + 0.2f, this.transform.position.y, this.transform.position.z), Quaternion.identity);
                temp.transform.Rotate(90, 0, 0);
            }

            else if (myAnim.GetFloat("lastMoveY") > 0)
            {
                temp = Instantiate(NormalArrow, new Vector3(this.transform.position.x, this.transform.position.y, this.transform.position.z + 0.2f), Quaternion.identity);
                temp.transform.Rotate(90, -90, 0);
            }
        }
    }
    public void GenerateWaterArrow()
    {
        if (GameManger.WATERARROWQUANTITY > 0)
        {


            GameManger.WATERARROWQUANTITY--;
            GameObject temp;
            if (myAnim.GetFloat("lastMoveY") < 0)
            {
                temp = Instantiate(WaterArrow, new Vector3(this.transform.position.x, this.transform.position.y, this.transform.position.z - 0.2f), Quaternion.identity);
                temp.transform.Rotate(90, 90, 0);
            }

            else if (myAnim.GetFloat("lastMoveX") < 0)
            {
                temp = Instantiate(WaterArrow, new Vector3(this.transform.position.x - 0.2f, this.transform.position.y, this.transform.position.z), Quaternion.identity);
                temp.transform.Rotate(90, 180, 0);
            }

            else if ((myAnim.GetFloat("lastMoveX") > 0))
            {
                temp = Instantiate(WaterArrow, new Vector3(this.transform.position.x + 0.2f, this.transform.position.y, this.transform.position.z), Quaternion.identity);
                temp.transform.Rotate(90, 0, 0);
            }

            else if (myAnim.GetFloat("lastMoveY") > 0)
            {
                temp = Instantiate(WaterArrow, new Vector3(this.transform.position.x, this.transform.position.y, this.transform.position.z + 0.2f), Quaternion.identity);
                temp.transform.Rotate(90, -90, 0);
            }
        }
    }
    public void GenerateMossArrow()
    {
        if (GameManger.MOSSARROWQUANTITY > 0)
        {


            GameManger.MOSSARROWQUANTITY--;
            GameObject temp;
            if (myAnim.GetFloat("lastMoveY") < 0)
            {
                temp = Instantiate(MossArrow, new Vector3(this.transform.position.x, this.transform.position.y, this.transform.position.z - 0.2f), Quaternion.identity);
                temp.transform.Rotate(90, 63.44f, 0);
            }

            else if (myAnim.GetFloat("lastMoveX") < 0)
            {
                temp = Instantiate(MossArrow, new Vector3(this.transform.position.x - 0.2f, this.transform.position.y, this.transform.position.z), Quaternion.identity);
                temp.transform.Rotate(90, 63.44f, 0);
            }

            else if ((myAnim.GetFloat("lastMoveX") > 0))
            {
                temp = Instantiate(MossArrow, new Vector3(this.transform.position.x + 0.2f, this.transform.position.y, this.transform.position.z), Quaternion.identity);
                temp.transform.Rotate(90, 63.44f, 0);
            }

            else if (myAnim.GetFloat("lastMoveY") > 0)
            {
                temp = Instantiate(MossArrow, new Vector3(this.transform.position.x, this.transform.position.y, this.transform.position.z + 0.2f), Quaternion.identity);
                temp.transform.Rotate(90, 63.44f, 0);
            }
        }
    }
    // Update is called once per frame
    void Update()
    {
        if (GameManger.TotalEnemiesKilled == GameManger.ReaminingEnemiesKilled)
        {
            GameManger.GameState = "PAUSED";
            LevelFinished.SetActive(true);
        }

        if (GameManger.isdying==false && GameManger.GameState.Equals("RUNNING"))
       {

       
        if (Input.GetKey(KeyCode.P))
        {
            GameManger.PlayerPosition();
        }
            if (Input.GetKey(KeyCode.W) || variableJoystick.Vertical>0.30)
        {
            
            myAnim.SetFloat("moveY", 1);
            myAnim.SetFloat("moveX", 0);

            myAnim.SetFloat("lastMoveX", 0);
            myAnim.SetFloat("lastMoveY", 0.1f);
            this.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, this.transform.position.z + (speed * Time.deltaTime));
        }
           
        else if (Input.GetKey(KeyCode.S) || variableJoystick.Vertical < -0.30)
        {
    
       
            myAnim.SetFloat("moveX", 0);
            myAnim.SetFloat("moveY", -1);

            myAnim.SetFloat("lastMoveX", 0);
            myAnim.SetFloat("lastMoveY", -0.1f);

            this.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, this.transform.position.z - (speed * Time.deltaTime));
        }


        else if (Input.GetKey(KeyCode.A)||variableJoystick.Horizontal < -0.30)
        {

            this.transform.position = new Vector3(this.transform.position.x - (speed * Time.deltaTime), this.transform.position.y, this.transform.position.z);
            myAnim.SetFloat("moveX", -1);
            myAnim.SetFloat("moveY", 0);

            myAnim.SetFloat("lastMoveX", -0.1f);
            myAnim.SetFloat("lastMoveY", 0);
        }

        else  if (Input.GetKey(KeyCode.D) || variableJoystick.Horizontal > 0.30)
        {
          
            myAnim.SetFloat("moveX", +1);
            myAnim.SetFloat("moveY", 0);

            myAnim.SetFloat("lastMoveX", 0.1f);
            myAnim.SetFloat("lastMoveY", 0);

            this.transform.position = new Vector3(this.transform.position.x + (speed*Time.deltaTime), this.transform.position.y, this.transform.position.z);
        }
        else
        {
            
            myAnim.SetFloat("moveX", 0);
            myAnim.SetFloat("moveY", 0);
        }
           

        if(isAttacking)
        {
            attackCounter -= Time.deltaTime;
            if(attackCounter<=0)
            {
                myAnim.SetBool("isPlayerAttacking", false);
                isAttacking = false;
            }
           
        }
        if(Input.GetKeyDown(KeyCode.T))
        {
                AttackWithKnife();
        }

        if (Input.GetKeyDown(KeyCode.R) )

        {
                GenerateWoodenArrow();
        }
        if (Input.GetKeyDown(KeyCode.V) )
        {
                GenerateWaterArrow();
        }
        if (Input.GetKeyDown(KeyCode.B))
        {
                GenerateMossArrow();
        }
        // myAnim.SetFloat("moveY", myRB.velocity.y);
    }
    }
}
