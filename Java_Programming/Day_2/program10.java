// Description : Write a program that accepts number from the user 
//               & print from that number in reverse order till 1.


import java.util.*;

class Display
{
    public void display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            System.out.print(iCnt + "\t");
        }
    }
}

class program10
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