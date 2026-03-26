// Description : Write a program that accepts array size , elements from the user ,
//               & returns the summation of the even elements from the array.


import java.util.*;

class ArrayX
{
    public int Arr[];
    public int iSize = 0;
    Scanner sobj = new Scanner(System.in);

    ArrayX(int iSize)
    {
        this.iSize = iSize;

        Arr = new int[iSize];
    }

    int SumEven()
    {
        int iCnt = 0;
        int iSumEven = 0;

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iSumEven = iSumEven + Arr[iCnt];
            }
        }

        return iSumEven;
    }

    void Accept()
    {
        int iCnt = 0;
        System.out.println("Enter the elements : ") ;

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    void Display()
    {
        int iCnt = 0;

        System.out.println("Elements are : ");
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            System.out.print(Arr[iCnt] + "\t");
        }
        System.out.println();
    }
}

class program58
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the array size : ");
        int iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();

        iRet = aobj.SumEven();
        System.out.println("Summation of even elements is : "+iRet);

        sobj.close();
    }
}