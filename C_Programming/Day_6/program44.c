/* 
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : 1 2 3 4 
             5 6 7 8 
             9 10 11 12 
             13 14 15 16
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    int iNo = 0;

    for(i = 1 , iNo = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++ , iNo++)
        {
            printf("%d\t",iNo);
        }
        printf("\n");
    }

}

int main()
{
    int iRow = 0;
    int iCol = 0;

    printf("Enter the number of rows : ");
    scanf("%d",&iRow);

    printf("Enter the number of columns : ");
    scanf("%d",&iCol);

    Display(iRow,iCol);


    return 0;
}