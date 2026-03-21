/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : A A A A
             B B B B 
             C C C C
             D D D D
*/

import java.util.*;

class Pattern
{
    public int iRow;
    public int iCol;

    Pattern(int iRow , int iCol)
    {
        this.iRow = iRow;
        this.iCol = iCol;
    }

    public void Display()
    {
        int i = 0;
        int j = 0;
        char ch = '\0';

        for(i = 1,ch = 'A' ; i <= iRow ; i++,ch++)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println();
        }
    }
}

class program41
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.print("Enter the number of columns : ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow , iCol);

        pobj.Display();

        sobj.close();
    }
}