// Description : Write a program that accepts array size , elements from the user ,  
//               & returns the maximum & minimum element from the array .

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

    void Minimum()
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

        cout<<"Maximum element is : "<<iMax<<"\n";
        cout<<"Minimum element is : "<<iMin<<"\n";

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

    cout<<"Enter the size of the array : ";
    cin>>iLength;

    Arr = new int[iLength];

    ArrayX aobj(Arr , iLength );

    aobj.Accept();
    aobj.Display();

    aobj.Minimum();
    
    return 0;
}