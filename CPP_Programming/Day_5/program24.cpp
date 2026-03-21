/*
    Description : Write a program that accprts frequency & prints
                  the below pattern : 
    Input : 4
    Output : * * * *
*/

#include<iostream>
using namespace std;

class Pattern
{
    public :
        int iNo;

    Pattern(int iNo)
    {
        this->iNo = iNo;
    }

    void Display()
    {
        int iCnt = 0;
        
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            cout<<"*\t";
        }

    }

};

int main()
{
    int iValue = 0;

    cout<<"Enter the frequency : ";
    cin>>iValue;

    Pattern pobj(iValue);

    pobj.Display();


    return 0;
}