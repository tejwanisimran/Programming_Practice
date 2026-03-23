/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : 1 2 3 4 
             5 6 7 8 
             9 10 11 12 
             13 14 15 16
*/

import java.util.Scanner;

class Pattern
{
    public int iRow;
    public int iCol;
    public int iNo;

    Pattern(int iRow,int iCol)
    {
        this.iRow = iRow;
        this.iCol = iCol;
        this.iNo = 0;
    }

    public void Display()
    {
        int i = 0;
        int j = 0;
        int iNo = 0;

        for(i = 1 , iNo = 1 ; i <= iRow ; i++)
        {
            for(j = 1 ; j <= iCol ; j++,iNo++)
            {
                System.out.print(iNo + "\t");
            }

            System.out.println();
        }
    }
}


class program44
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.print("Enter the number of columns : ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow, iCol);

        pobj.Display();

        sobj.close();

    }
}