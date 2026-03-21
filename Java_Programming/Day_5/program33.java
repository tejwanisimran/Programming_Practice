/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4 #
    Output : #  # # #
*/

import java.util.*;

class Pattern
{
    public int iNo;
    public String ch;

    Pattern(int iNo , String ch)
    {
        this.iNo = iNo;
        this.ch = ch;
    }

    public void Display()
    {
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            System.out.print(ch + "\t");
        }
    }

}

class program33
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the frequency : ");
        int iValue = sobj.nextInt();

        sobj.nextLine();

        System.out.print("Enter the character that you want to print : ");
        String ch = sobj.nextLine();

        Pattern pobj = new Pattern(iValue , ch);

        pobj.Display();

        sobj.close();
    }
}