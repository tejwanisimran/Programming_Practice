// Description : Write a program that accepts number from the user 
//               & print Hello that number of times with the given number


import java.util.*;

class Display
{
    public void display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            System.out.println(iCnt + " : Hello");
        }
    }
}

class program9
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