//Description : Write a program that accepts number from the user & reverse that 
//              number

import java.util.*;
class Digits
{
    public int iNo;

    Digits(int iNo )
    {
        this.iNo = iNo;
    }

    public int ReverseNumber()
    {
        int iDigit = 0;
        int iRev = 0;

       while(iNo != 0)
       {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo / 10;
       }

       return iRev;
    }
}

class program23
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits(iValue);

        int iRet = dobj.ReverseNumber();

        System.out.println("Reversed number is : "+iRet);

        sobj.close();
    }
}