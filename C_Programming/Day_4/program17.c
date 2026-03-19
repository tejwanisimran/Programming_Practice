// Descriptikn : Write a program that accepts number from the user & returns 
//               its sum of factors & non-factors

#include<stdio.h>
#include<stdbool.h>

void Summation(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }

    printf("Sum of factors : %d\n",iSum1);
    printf("Sum of Non factors is : %d\n",iSum2);

}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Summation(iValue);

    return 0;
}


