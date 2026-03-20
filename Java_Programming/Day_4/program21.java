//Description : Write a program tha accepts number from the user & count the 
//              frequency of the digit

import java.util.*;
class Digits
{
    public int iNo;
    public int iTarget;

    Digits(int iNo , int iTarget)
    {
        this.iNo = iNo;
        this.iTarget = iTarget;
    }

    public int Frequency()
    {
        int iDigit = 0;
        int iCount = 0;

       while(iNo != 0)
       {
            iDigit = iNo % 10;
            if(iDigit == iTarget)
            {
                iCount++;
            }
            iNo = iNo / 10;
       }

       return iCount;
    }

}

class program21
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iValue = sobj.nextInt();

        System.out.println("Enter the target : ");
        int iTarget = sobj.nextInt();


        Digits dobj = new Digits(iValue , iTarget);

        int iRet = dobj.Frequency();

        System.out.println("Frequency is : "+iRet);

        sobj.close();
    }
}