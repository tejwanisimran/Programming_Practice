// Description : Write a program that accepts array size , target  , elements from the user ,  
//               & returns the frequency of that target element from the array.

#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int *Arr , int iSize , int iTarget)
{
    int iCnt = 0;
    int iCount = 0;    

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iTarget)
        {
            iCount++;
        }
    }

    return iCount;
    
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
    int iTarget = 0;

    printf("Enter the size of the array : ");
    scanf("%d",&iLength);

    printf("Enter the number that you want to serach in the array : ");
    scanf("%d",&iTarget);

    Arr = (int *)malloc(sizeof(int) * iLength);

    Accept(Arr,iLength);
    Display(Arr,iLength);

    iRet = CountFrequency(Arr , iLength , iTarget);
    printf("Frequency is : %d\n",iRet);
    

    return 0;
}