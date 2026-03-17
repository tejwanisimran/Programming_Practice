// Description : Write a program that accepts number from the user & returns 
//               summation of all numbers till that numbers.

import java.util.*;

class Summation
{
    public int iNo;
    
    Summation(int iNo)
    {
        this.iNo = iNo;
    }

    public int Addition()
    {
        int iCnt = 0;
        int iSum = 0;
        
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        
        return iSum;
    }

}

class program13
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        Summation suobj = new Summation(iValue);

        int iRet = suobj.Addition();

        System.out.println("Summation is : "+iRet);

        sobj.close();

    }
}