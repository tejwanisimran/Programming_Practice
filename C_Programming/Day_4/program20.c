//Description : Write a program that accepts number from the user & count its 
//              even digits


#include<stdio.h>
#include<stdbool.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCount++;
        }
        
        iNo = iNo / 10;
    }

    return iCount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of even digits are : %d\n",iRet);

    return 0;
}


