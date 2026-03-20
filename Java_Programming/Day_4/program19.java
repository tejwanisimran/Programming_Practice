//Description : Write a program tha accepts number from the user & count its digits

import java.util.*;
class Digits
{
    public int iNo;

    Digits(int iNo)
    {
        this.iNo = iNo;
    }

    public int Count()
    {
        int iCount = 0;

       while(iNo != 0)
       {
            iCount++;
            iNo = iNo / 10;
       }

       return iCount;
    }

}

class program19
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits(iValue);

        int iRet = dobj.Count();

        System.out.println("Number of digits are : "+iRet);

        sobj.close();
    }
}