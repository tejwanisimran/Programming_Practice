/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output :  * * * *
              * 0 0 *
              * 0 0 *
              * * * *
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1  ; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if((i == 1 ) || (i == iRow) || (j == 1) || (j == iCol))
            {
                printf("*\t");
            }
            else
            {
                printf("0\t");
            }
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