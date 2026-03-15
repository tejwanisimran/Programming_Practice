// Description : Write a program that prints numbers from 1 to 4 using for loop

#include<iostream>
using namespace std;

void Display()
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= 4 ; iCnt++)
    {
        cout<<iCnt<<"\t";
    }

}

int main()
{
    Display();

    return 0;
}