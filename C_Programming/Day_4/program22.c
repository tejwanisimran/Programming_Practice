//Description : Write a program that accepts number from the user & display its
//              even digits

#include<stdio.h>

void DisplayEvenDigits(int iNo )
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            printf("%d\t",iDigit);
        }
        
        iNo = iNo / 10;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayEvenDigits(iValue);

    return 0;
}


