// Description : Write a program to check whether the number is perfect number or not.

# include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return (iSum == iNo);
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("It is a perfect number...\n");
    }
    else
    {
        printf("It is not a perfect number...\n");

    }
    return 0;
}

