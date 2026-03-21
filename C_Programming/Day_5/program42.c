/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : a a a a
             b b b b 
             c c c c
             d d d d
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 ;
    int j = 0;
    char ch = '\0';

    for(i = 1 , ch = 'a'; i <= iRow ; i++, ch++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            printf("%c\t",ch);
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