// Description : Write a program that accepts number from the user & returns 
//               its sum of factors & non-factors

import java.util.*;
class Summation
{
    public int iNo;

    Summation(int iNo)
    {
        this.iNo = iNo;
    }

    public void FactorsNonFactors()
    {
        int iCnt = 0;
        int iSum1 = 0;
        int iSum2 = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum1 = iSum1 + iCnt;
            }
            else
            {
                iSum2 = iSum2 + iCnt;
            }
        }

        System.out.println("Summation of factors is : "+iSum1);
        System.out.println("Summation of non-factors is : "+iSum2);

    }
}

class program17
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        Summation suobj = new Summation(iValue);

        suobj.FactorsNonFactors();

        sobj.close();
    }
}