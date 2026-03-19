//Description : Write a program tha accepts number from the user & count its digits

#include<iostream>
using namespace std;

class Digits
{
    public :
        int iNo;

    Digits(int iNo)
    {
        this->iNo = iNo;
    }

    int Count()
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;
            iNo = iNo /10;
        }

        return iCount;
    }
};


int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    Digits dobj(iValue);

    iRet = dobj.Count();

    cout<<"Number of digits are : "<<iRet<<"\n";

    return 0;
}