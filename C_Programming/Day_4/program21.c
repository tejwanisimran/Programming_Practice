//Description : Write a program that accepts number from the user & count the 
//              frequency of the digit

#include<stdio.h>

int CountFrequency(int iNo , int iTarget)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iTarget)
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
    int iTarget = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    printf("Enter the target : ");
    scanf("%d",&iTarget);

    iRet = CountFrequency(iValue , iTarget);

    printf("Frequency is  : %d\n",iRet);

    return 0;
}


