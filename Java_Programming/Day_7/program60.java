// Description : Write a program that accepts array size , target  , elements from the user ,  
//               & search  whether that element is present in that array or not .


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

    boolean FindElement()
    {
        int iCnt = 0;
        boolean bFlag = false;

        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            if(Arr[iCnt] == iTarget)
            {
                bFlag = true;
            }
        }

        return bFlag;
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

class program60
{
    public static void main(String A[])
    {
        boolean bRet = false;
        int iTarget = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the array size : ");
        int iLength = sobj.nextInt();

        System.out.print("Enter the number that you want to search : ");
        iTarget = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength , iTarget);

        aobj.Accept();
        aobj.Display();

        bRet = aobj.FindElement();
        if(bRet == true)
        {
            System.out.println(iTarget + " is present...");
        }
        else
        {
            System.out.println(iTarget + " is not present...");
        }

        sobj.close();
    }
}