// 11. Description : Write a program that accepts array size , elements from the user ,  
//               & returns the maximum & minimum element from the array .


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

    void MaxMin()
    {
        int iCnt = 0;
        int iMin = 0;
        int iMax = 0;

        iMin = Arr[0];
        iMax = Arr[0];

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
        }

        System.out.println("Maximum element is : "+iMax);
        System.out.println("Minimum element is : "+iMin);

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

class program64
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the array size : ");
        int iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();

        aobj.MaxMin();

        sobj.close();
    }
}