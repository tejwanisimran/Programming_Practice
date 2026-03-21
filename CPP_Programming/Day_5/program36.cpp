/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : 1 1 1 1 
             2 2 2 2 
             3 3 3 3
             4 4 4 4  
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
        
        for(i = 1 ; i <= iRow ; i++)
        {
            for(j = 1 ; j <= iCol ; j++)
            {
                cout<<i<<"\t";
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