
// Description : Write a program to check whether the number is perfect number or not.

import java.util.*;

class Calculate
{
    public int iNo;
    
    Calculate(int iNo)
    {
        this.iNo = iNo;
    }

    public boolean Perfect()
    {
        int iCnt = 0;
        int iSum = 0;
        
        for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        
        return (iSum == iNo);
    }

}

class program15
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        Calculate cobj = new Calculate(iValue);

        boolean bRet = cobj.Perfect();

        if(bRet == true)
        {
            System.out.println("It's an perfect number...");
        }
        else
        {
            System.out.println("It's not an perfect number...");
        }

        sobj.close();

    }
}