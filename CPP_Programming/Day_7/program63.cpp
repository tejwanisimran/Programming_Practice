// Description : Write a program that accepts array size , elements from the user ,  
//               & returns the Minimum element from the array .

#include<iostream>
using namespace std;

class ArrayX
{
    public :
        int * Arr;
        int iSize;

    ArrayX(int * Arr , int iSize)
    {
        this->Arr = Arr;
        this->iSize = iSize;
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

        cout<<"Enter the elements : "<<"\n";
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            scanf("%d",&Arr[iCnt]);
        }
    }

     void Display()
    {
        int iCnt = 0;

        cout<<"Elements from the array are : "<<"\n";
        for(iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            printf("%d\t",Arr[iCnt]);
        }
        cout<<"\n";
    }
};


int main()
{
    int * Arr = NULL;
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the size of the array : ";
    cin>>iLength;

    Arr = new int[iLength];

    ArrayX aobj(Arr , iLength );

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Minimum();
    cout<<"Minimum element is : "<<iRet<<"\n";
    
    return 0;
}