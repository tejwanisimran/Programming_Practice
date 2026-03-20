//Description : Write a program tha accepts number from the user & display its
//              even digits

import java.util.*;
class Digits
{
    public int iNo;

    Digits(int iNo )
    {
        this.iNo = iNo;
    }

    public void DisplayEven()
    {
        int iDigit = 0;

       while(iNo != 0)
       {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                System.out.print(iDigit+"\t");
            }
            iNo = iNo / 10;
       }
    }
}

class program22
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits(iValue);

        dobj.DisplayEven();

        sobj.close();
    }
}