//Description : Write a program tha accepts number from the user & count the 
//              frequency of the digit

#include<iostream>
using namespace std;

class Digits
{
    public :
        int iNo;
        int iTarget;

    Digits(int iNo , int iTarget)
    {
        this->iNo = iNo;
        this->iTarget = iTarget;
    }

    int CountFrequency()
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
            iNo = iNo /10;
        }

        return iCount;
    }
};


int main()
{
    int iValue = 0;
    int iRet = 0;
    int iTarget = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    cout<<"Enter the target : ";
    cin>>iTarget;

    Digits dobj(iValue , iTarget);

    iRet = dobj.CountFrequency();

    cout<<"Frequency is  : "<<iRet<<"\n";

    return 0;
}