//Description : Write a program tha accepts number from the user & display its digits

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

    void Display()
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            cout<<iDigit<<"\t";
            iNo = iNo /10;
        }
    }
};


int main()
{
    int iValue = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    Digits dobj(iValue);

    dobj.Display();

    return 0;
}