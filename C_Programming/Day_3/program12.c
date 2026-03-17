// Description : Write a program to check whether the number is number is 
//               divisible by 3 or not.

# include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    bool bFlag = false;

    if((iNo % 3 == 0) && (iNo % 5 == 0))
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

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("It is divisible by 3 & 5\n");
    }
    else
    {
        printf("It is not divisible by 3 & 5\n");
    }


    return 0;
}

