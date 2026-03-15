// Description : Write a program that accepts number from the user 
//               & print Hello that number of times

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        cout<<"Hello\n";
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