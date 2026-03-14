// Description : Write a program to calculate the percentage .

#include<iostream>
using namespace std;

float CalculatePercentage(int iObtained , int iTotal)
{
    float fPercentage = 0.0f;

    fPercentage = (float)iObtained / (float)iTotal * 100;

    return fPercentage;
}

int main()
{
    int iObtained = 0;
    int iTotal = 0;
    float fRet = 0.0f;

    cout<<"Enter the obtained marks : ";
    cin>>iObtained;

    cout<<"Enter the total marks : ";
    cin>>iTotal;

    fRet = CalculatePercentage(iObtained , iTotal);

    cout<<"Total percentage is : "<<fRet<<"\n";

    return 0;
}