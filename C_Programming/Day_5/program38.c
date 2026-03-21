/* 
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output :1 * 3 * 
            1 * 3 *
            1 * 3 * 
            1 * 3 *
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 ;
    int j = 0;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if(j % 2 != 0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("*\t");
            }

        }
        printf("\n");
    }

}


int main()
{
    int iRow = 0;
    int iCol = 0;
    char ch = '\0';

    printf("Enter the number of rows : ");
    scanf("%d",&iRow);

    printf("Enter the number of columns : ");
    scanf("%d",&iCol);

    Display(iRow , iCol);

    return 0;
}