
// Description : Write a program that accepts number from the user & returns 
//               factorial of the given number.

// Description : Write a program to check whether the number is perfect number or not.

import java.util.*;

class Calculate
{
    public int iNo;
    
    Calculate(int iNo)
    {
        this.iNo = iNo;
    }

    public int Factorial()
    {
        int iCnt = 0;
        int iFact = 1;
        
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        
        return iFact;
    }

}

class program14
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        Calculate cobj = new Calculate(iValue);

        int iRet = cobj.Factorial();

        System.out.println("Factorial is : "+iRet);

        sobj.close();

    }
}