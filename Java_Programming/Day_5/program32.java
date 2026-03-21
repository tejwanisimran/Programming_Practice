/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4
    Output :-4 -3 -2 -1 0 1 2 3 4
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

        for(iCnt = -iNo ; iCnt <= iNo ; iCnt++)
        {
            System.out.print(iCnt + "\t");
        }
    }

}

class program32
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