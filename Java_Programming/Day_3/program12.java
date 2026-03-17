// Description : Write a program to check whether the number is number is 
//               divisible by 3 & 5 or not.


import java.util.*;

class Check
{
    public int iNo;
    
    Check(int iNo)
    {
        this.iNo = iNo;
    }

    public boolean CheckDivisible()
    {
        boolean bFlag = false;

        if((iNo % 3 == 0) && (iNo % 5 == 0))
        {
            bFlag = true;
        }

        return bFlag;
    }

}

class program12
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        Check cobj = new Check(iValue);

        boolean bRet = cobj.CheckDivisible();

        if(bRet == true)
        {
            System.out.println("It's divisible by 3 & 5...");
        }
        else
        {
            System.out.println("It's not divisible by 3 & 5...");
        }

        sobj.close();

    }
}