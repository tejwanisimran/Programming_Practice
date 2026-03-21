/* 
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : a a a a
             B B B B 
             c c c c
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
        char ch1 = '\0';
        char ch2 = '\0';

        for(i = 1,ch1 = 'a' , ch2 = 'A' ; i <= iRow ; i++,ch1++,ch2++)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                if(i % 2 != 0)
                {
                    System.out.print(ch1+"\t");
                }
                else
                {
                    System.out.print(ch2+"\t");
                }
            }
            System.out.println();
        }
    }
}

class program43
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