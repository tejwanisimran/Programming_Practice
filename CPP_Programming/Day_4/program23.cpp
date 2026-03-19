//Description : Write a program tha accepts number from the user & reverse that 
//              number

#include<iostream>
using namespace std;

class Digits
{
    public :
        int iNo;
        int iTarget;

    Digits(int iNo)
    {
        this->iNo = iNo;
    }

    int ReverseNumber()
    {
        int iDigit = 0;
        int iRev = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev *10 + iDigit;
            iNo = iNo /10;
        }

        return iRev;

    }
};


int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    Digits dobj(iValue );

    iRet = dobj.ReverseNumber();

    cout<<"Reversed number is : "<<iRet<<"\n";

    return 0;
}