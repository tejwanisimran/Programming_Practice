// Description : Write a program that accepts array size , elements from the user ,  
//               & returns the maximum & minimum element from the array .

#include<stdio.h>
#include<stdlib.h>

void MaxMin(int *Arr , int iSize )
{
    int iCnt = 0;
    int iMax = 0;    
    int iMin = 0;

    iMax = Arr[0];
    iMin = Arr[0];

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    printf("Maximum element is : %d\n",iMax);
    printf("Minimum element is : %d\n",iMin);
    
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

    printf("Enter the size of the array : ");
    scanf("%d",&iLength);

    Arr = (int *)malloc(sizeof(int) * iLength);

    Accept(Arr,iLength);
    Display(Arr,iLength);

    MaxMin(Arr , iLength );
    
    return 0;
}