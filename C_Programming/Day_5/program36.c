/* 
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : 1 1 1 1 
             2 2 2 2 
             3 3 3 3
             4 4 4 4  
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
            printf("%d\t",i);

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