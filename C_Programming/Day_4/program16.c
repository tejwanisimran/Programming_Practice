// Description : Write a program that accepts number from the user &  
//               check whether that number is prime or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    for(iCnt = 2 ; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            bFlag = false;
        }
    }

    return bFlag;

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("It's an prime number...");
    }
    else
    {
        printf("It's not an prime number...");
    }

    return 0;
}


