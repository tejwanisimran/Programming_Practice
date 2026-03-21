/* 15. 
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : a a a a
             B B B B 
             c c c c
             D D D D
*/
#include<iostream>
using namespace std;

class Pattern
{
    public :
        int iRow;
        int iCol;

    Pattern(int iRow , int iCol)
    {
        this->iRow = iRow ;
        this->iCol = iCol;
    }

    void Display()
    {
        int i = 0;
        int j = 0;
        char ch1 = '\0';
        char ch2 = '\0';
        
        for(i = 1  , ch1 = 'a' , ch2 = 'A'; i <= iRow ; i++,ch1++ , ch2++)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                if(i % 2 != 0)
                {
                    cout<<ch1<<"\t";
                }
                else
                {
                    cout<<ch2<<"\t";
                }
            }
            cout<<"\n";
        }
       

    }

};

int main()
{
    int iRow = 0;
    int iCol = 0;

    cout<<"Enter the number of rows : ";
    cin>>iRow;

    cout<<"Enter the number of columns : ";
    cin>>iCol;

    Pattern pobj(iRow , iCol);

    pobj.Display();


    return 0;
}