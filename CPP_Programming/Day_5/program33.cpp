/*  
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4 #
    Output : #  # # #
*/

#include<iostream>
using namespace std;

class Pattern
{
    public :
        int iNo;
        char ch;

    Pattern(int iNo , char ch)
    {
        this->iNo = iNo;
        this->ch = ch;
    }

    void Display()
    {
        int iCnt = 0;
        
        for(iCnt = 1  ; iCnt <= iNo ; iCnt++)
        {
            cout<<ch<<"\t";
        }

    }

};

int main()
{
    int iValue = 0;
    char ch = '\0';

    cout<<"Enter the frequency : ";
    cin>>iValue;

    cout<<"Enter the character that you want to print : ";
    cin>>ch;

    Pattern pobj(iValue , ch);

    pobj.Display();


    return 0;
}