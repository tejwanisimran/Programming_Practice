// Description : Write a program that accepts array size , elements from the user ,
//               & display the array.

#include<stdio.h>
#include<stdlib.h>

void Display(int * Arr , int iSize)
{
    int iCnt = 0;

    printf("Elements from the array are : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
}

void Accept(int * Arr , int iSize)
{
    int iCnt = 0;

    printf("Enter the elements : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
}

int main()
{
    int * Arr = NULL;
    int iLength = 0;

    printf("Enter the size of the array : ");
    scanf("%d",&iLength);

    Arr = (int *)malloc(sizeof(int) * iLength);

    Accept(Arr,iLength);
    Display(Arr,iLength);

    return 0;
}