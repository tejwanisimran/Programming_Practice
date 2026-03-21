/*
    Description : Write a program that accprts frequency & prints
                  the below pattern : 
    Input : 4
    Output : 1 2 3 4
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt<= iNo ; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d",&iValue);

    Display(iValue);

}
