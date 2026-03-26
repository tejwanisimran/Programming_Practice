// Description : Write a program that accepts array size , elements from the user ,  
//               & returns the minimum element from the array .

#include<stdio.h>
#include<stdlib.h>

int Minimum(int *Arr , int iSize )
{
    int iCnt = 0;
    int iMin = 0;    

    iMin = Arr[0];

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
    
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

    iRet = Minimum(Arr , iLength );
    printf("Minimum element is : %d\n",iRet);
    

    return 0;
}