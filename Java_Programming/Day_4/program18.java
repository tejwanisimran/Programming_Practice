//Description : Write a program tha accepts number from the user & display its digits

import java.util.*;
class Digits
{
    public int iNo;

    Digits(int iNo)
    {
        this.iNo = iNo;
    }

    public void Display()
    {
        int iDigit = 0;

       while(iNo != 0)
       {
            iDigit = iNo % 10;
            System.out.print(iDigit+"\t");
            iNo = iNo / 10;
       }
    }
}

class program18
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits(iValue);

        dobj.Display();

        sobj.close();
    }
}