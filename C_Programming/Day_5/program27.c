/*
    Description : Write a program that accprts frequency & prints
                  the below pattern : 
    Input : 4
    Output : 4 3 2 1
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
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
