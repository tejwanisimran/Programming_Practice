/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4 #
    Output : #  # # #
*/

#include<stdio.h>

void Display(int iNo , char ch)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%c\t",ch);
    }

}


int main()
{
    int iValue = 0;
    char ch = '\0';

    printf("Enter the frequency : ");
    scanf("%d",&iValue);

    printf("Enter the character that you want to print : ");
    scanf(" %c",&ch);

    Display(iValue , ch);

    return 0;
}