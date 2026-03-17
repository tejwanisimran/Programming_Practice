// Description : Write a program that accepts number from the user & returns 
//               factorial of the given number.

// Description : Write a program to check whether the number is perfect number or not.

# include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}

