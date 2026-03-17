// Description : Write a program to check whether the number is even or odd.

# include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    bool bFlag = false;

    if(iNo % 2 == 0)
    {
        bFlag = true;
    }

    return bFlag;

}


int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("It is an even number...\n");
    }
    else
    {
        printf("It is an odd number...\n");
    }


    return 0;
}

