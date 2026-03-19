//Description : Write a program that accepts number from the user & display its digits

#include<stdio.h>
#include<stdbool.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);
        iNo = iNo / 10;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}


