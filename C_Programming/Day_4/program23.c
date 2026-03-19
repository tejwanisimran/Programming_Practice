//Description : Write a program that accepts number from the user & reverse that 
//              number

#include<stdio.h>

int ReverseNumber(int iNo )
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }

    return iRev;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = ReverseNumber(iValue);

    printf("Reversed number is : %d\n",iRet);



    return 0;
}


