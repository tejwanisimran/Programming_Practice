// 6. Description : Write a program that accepts array size , elements from the user ,
//               & returns the summation of the odd elements from the array.


#include<stdio.h>
#include<stdlib.h>

int SumOdd(int *Arr , int iSize)
{
    int iCnt = 0;
    int iSumOdd = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    return iSumOdd;
}

void Display(int * Arr , int iSize)
{
    int iCnt = 0;

    printf("Elements from the array are : \n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
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
    int iRet = 0;

    printf("Enter the size of the array : ");
    scanf("%d",&iLength);

    Arr = (int *)malloc(sizeof(int) * iLength);

    Accept(Arr,iLength);
    Display(Arr,iLength);

    iRet = SumOdd(Arr , iLength);
    printf("Summation of odd elements is : %d\n",iRet);


    return 0;
}