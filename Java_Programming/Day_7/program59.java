// Description : Write a program that accepts array size , elements from the user ,
//               & returns the summation of the odd elements from the array.


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

    int SumOdd()
    {
        int iCnt = 0;
        int iSumOdd = 0;

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            if(Arr[iCnt] % 2 != 0)
            {
                iSumOdd = iSumOdd + Arr[iCnt];
            }
        }

        return iSumOdd;
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

class program59
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

        iRet = aobj.SumOdd();
        System.out.println("Summation of odd elements is : "+iRet);

        sobj.close();
    }
}