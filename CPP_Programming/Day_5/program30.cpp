/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
   Input : 4
   Output :4 * 3 * 2 * 1 *
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
        
        for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            cout<<iCnt<<"\t"<<"*"<<"\t";
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