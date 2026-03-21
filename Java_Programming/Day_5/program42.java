/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : a a a a
             b b b b 
             c c c c
             d d d d
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

        for(i = 1,ch = 'a' ; i <= iRow ; i++,ch++)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println();
        }
    }
}

class program42
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