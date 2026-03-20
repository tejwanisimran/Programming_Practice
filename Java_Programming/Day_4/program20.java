//Description : Write a program tha accepts number from the user & count its 
//              even digits

import java.util.*;
class Digits
{
    public int iNo;

    Digits(int iNo)
    {
        this.iNo = iNo;
    }

    public int CountEven()
    {
        int iDigit = 0;
        int iCountEven = 0;

       while(iNo != 0)
       {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iCountEven++;
            }
            iNo = iNo / 10;
       }

       return iCountEven;
    }

}

class program20
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits(iValue);

        int iRet = dobj.CountEven();

        System.out.println("Number of even digits are : "+iRet);

        sobj.close();
    }
}