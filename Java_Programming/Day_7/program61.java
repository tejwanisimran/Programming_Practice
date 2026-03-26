// Description : Write a program that accepts array size , target  , elements from the user ,  
//               & returns the frequency of that target element from the array.

import java.util.*;

class ArrayX
{
    public int Arr[];
    public int iSize = 0;
    Scanner sobj = new Scanner(System.in);
    int iTarget = 0;

    ArrayX(int iSize , int iTarget)
    {
        this.iSize = iSize;
        this.iTarget = iTarget;
        Arr = new int[iSize];
    }

    int CountFrequency()
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            if(Arr[iCnt] == iTarget)
            {
                iCount++;
            }
        }

        return iCount;
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

class program61
{
    public static void main(String A[])
    {
        int iRet = 0;
        int iTarget = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the array size : ");
        int iLength = sobj.nextInt();

        System.out.print("Enter the number that you want to search : ");
        iTarget = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength , iTarget);

        aobj.Accept();
        aobj.Display();

        iRet = aobj.CountFrequency();
        System.out.println("Frequency is : "+iRet);

        sobj.close();
    }
}