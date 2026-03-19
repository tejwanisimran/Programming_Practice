//Description : Write a program tha accepts number from the user & display its
//              even digits

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

    void DisplayEven()
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                cout<<iDigit<<"\t";
            }
            iNo = iNo /10;
        }

    }
};


int main()
{
    int iValue = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    Digits dobj(iValue );

    dobj.DisplayEven();

    return 0;
}