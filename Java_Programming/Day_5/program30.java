/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
   Input : 4
   Output :4 * 3 * 2 * 1 *
*/

import java.util.*;

class Pattern
{
    public int iNo;

    Pattern(int iNo)
    {
        this.iNo = iNo;
    }

    public void Display()
    {
        int iCnt = 0;

        for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            System.out.print(iCnt + "\t" + "*" + "\t");
        }
    }

}

class program30
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the frequency : ");
        int iValue = sobj.nextInt();

        Pattern pobj = new Pattern(iValue);

        pobj.Display();

        sobj.close();
    }
}