// Description : Write a program that accepts number from the user &  
//               check whether that number is prime or not

import java.util.*;
class Check
{
    public int iNo;

    Check(int iNo)
    {
        this.iNo = iNo;
    }

    public boolean CheckPrime()
    {
        boolean bFlag = true;
        int iCnt = 0;

        for(iCnt = 2 ; iCnt <= iNo/2 ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                bFlag = false;
            }
        }

        return bFlag;

    }

}

class program16
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        boolean bRet = false;

        Check cobj = new Check(iValue);

        bRet = cobj.CheckPrime();

        if(bRet == true)
        {
            System.out.println("It's an prime number...");
        }
        else
        {
            System.out.println("It's not an prime number...");
        }


        sobj.close();
    }
}