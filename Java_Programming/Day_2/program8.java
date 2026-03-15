// Description : Write a program that accepts number from the user 
//               & print Hello that number of times

import java.util.*;

class Display
{
    public void display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            System.out.println("Hello");
        }
    }
}

class program8
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        Display dobj = new Display();

        dobj.display(iValue);

        sobj.close();
    }
}