// Description : Write a program that accepts array size , target  , elements from the user ,  
//               & search  whether that element is present in that array or not .

#include<iostream>
using namespace std;

class ArrayX
{
    public :
        int * Arr;
        int iSize;
        int iTarget;

    ArrayX(int * Arr , int iSize , int iTarget)
    {
        this->Arr = Arr;
        this->iSize = iSize;
        this->iTarget = iTarget;
    }

    bool FindElement()
    {
        int iCnt = 0;
        bool bFlag = false;

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
    bool bRet = false;
    int iTarget = 0;

    cout<<"Enter the size of the array : ";
    cin>>iLength;

    cout<<"Enter the number that you want to search : ";
    cin>> iTarget;

    Arr = new int[iLength];

    ArrayX aobj(Arr , iLength , iTarget);

    aobj.Accept();
    aobj.Display();

    bRet = aobj.FindElement();
    if(bRet == true)
    {
        cout<<iTarget<<" is present..."<<"\n";
    }
    else
    {
        cout<<iTarget<<" is not present..."<<"\n";
    }

    return 0;
}