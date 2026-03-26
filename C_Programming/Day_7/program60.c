// Description : Write a program that accepts array size , target  , elements from the user ,  
//               & search  whether that element is present in that array or not .

#include<stdio.h>
#include<stdlib.h>
# include<stdbool.h>

bool FindElement(int *Arr , int iSize , int iTarget)
{
    int iCnt = 0;
    bool bFlag = false;
    

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iTarget)
        {
            bFlag = true;
        }
    }

    return bFlag;
    
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
    bool bRet = false;
    int iTarget = 0;

    printf("Enter the size of the array : ");
    scanf("%d",&iLength);

    printf("Enter the number that you want to serach in the array : ");
    scanf("%d",&iTarget);

    Arr = (int *)malloc(sizeof(int) * iLength);

    Accept(Arr,iLength);
    Display(Arr,iLength);

    bRet = FindElement(Arr , iLength , iTarget);
    if(bRet == true)
    {
        printf("%d is present...\n",iTarget);
    }
    else
    {
        printf("%d is not present...\n",iTarget);
    }

    return 0;
}