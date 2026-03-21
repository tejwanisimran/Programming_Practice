/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : a a a a
             B B B B 
             c c c c
             D D D D
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0 ;
    int j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(i = 1 , ch1 = 'a' , ch2 = 'A'; i <= iRow ; i++, ch1++ , ch2++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch2);
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