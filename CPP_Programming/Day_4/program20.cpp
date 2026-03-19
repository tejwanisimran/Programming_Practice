//Description : Write a program tha accepts number from the user & count its 
//              even digits


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

    int CountEven()
    {
        int iDigit = 0;
        int iCountEven = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iCountEven++;
            }
            iNo = iNo /10;
        }

        return iCountEven;
    }
};


int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    Digits dobj(iValue);

    iRet = dobj.CountEven();

    cout<<"Number of even digits are : "<<iRet<<"\n";

    return 0;
}