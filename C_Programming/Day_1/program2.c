// Description : Write a program to calculate the percentage .

#include<stdio.h>

int CalculatePercentage(int iObtained , int iTotal)
{
    float fPercentage = 0.0f;

    fPercentage = (float)iObtained / (float)iTotal * 100;
    
    return fPercentage;
}

int main()
{
    int iObtained = 0;
    int iTotal = 0;
    float fPercentage = 0.0f;

    printf("Enter the obtained marks : ");
    scanf("%d",&iObtained);

    printf("Enter the total marks : ");
    scanf("%d",&iTotal);

    fPercentage = CalculatePercentage(iObtained , iTotal);

    printf("The percentage is : %f",fPercentage);

    return 0;
}