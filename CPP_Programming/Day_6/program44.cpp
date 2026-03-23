/* 
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : 1 2 3 4 
             5 6 7 8 
             9 10 11 12 
             13 14 15 16
*/

#include<iostream>
using namespace std;

class Pattern
{
    public :
        int iRow;
        int iCol;
        int iNo = 0;

    Pattern(int iRow , int iCol)
    {
        this->iRow = iRow ;
        this->iCol = iCol;
        this->iNo = 0;
    }

    void Display()
    {
        int i = 0;
        int j = 0;
        
        for(i = 1 , iNo = 1 ; i <= iRow ; i++)
        {
            for(j = 1 ; j <= iCol ; j++,iNo++)
            {
                cout<<iNo<<"\t";
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