// Description : Write a program to check whether the number is even or odd.

import java.util.*;

class Check
{
    public int iNo;
    
    Check(int iNo)
    {
        this.iNo = iNo;
    }

    public boolean CheckEven()
    {
        boolean bFlag = false;

        if(iNo % 2 == 0)
        {
            bFlag = true;
        }

        return bFlag;
    }

}

class program11
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        Check cobj = new Check(iValue);

        boolean bRet = cobj.CheckEven();

        if(bRet == true)
        {
            System.out.println("It's an even number...");
        }
        else
        {
            System.out.println("It's an odd number...");
        }

        sobj.close();

    }
}