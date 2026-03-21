/*
    Description : Write a program that accprts frequency & prints
                  the below pattern : 
    Input : 4
    Output : $ $ $ $
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

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            System.out.print("$\t");
        }
    }

}

class program25
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