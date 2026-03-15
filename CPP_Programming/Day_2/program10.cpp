// Description : Write a program that accepts number from the user 
//               & print from that number in reverse order till 1.

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
    {
        cout<<iCnt <<"\t";
    }

}

int main()
{
    int iValue = 0;
    
    cout<<"Enter the number : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}