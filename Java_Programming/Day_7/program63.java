// Description : Write a program that accepts array size , elements from the user ,  
//               & returns the Minimum element from the array .

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

    int Minimum()
    {
        int iCnt = 0;
        int iMin = 0;

        iMin = Arr[0];
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
        }

        return iMin;
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

class program63
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the array size : ");
        int iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();

        iRet = aobj.Minimum();
        System.out.println("Minimum element is : "+iRet);

        sobj.close();
    }
}