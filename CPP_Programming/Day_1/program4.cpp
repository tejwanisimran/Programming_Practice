// Description : Accpet the age from the user 
/*Start 
     Accept the age from user
        If age is less than 5 thn there will be no ticket
        If age is in between 5 to 18 then the ticket will be of price 700
        If age is in between 18 to 50 then the ticket will be of price 999
        If age is greater than 50 then the ticket will be of price 500
*/

#include<iostream>
using namespace std;

int CalculateTicket(int iAge)
{
    int iPrice = 0;

    if(iAge < 0)
    {
        cout<<"Invalid input..!!\n";
        return -1;
    }

    if(iAge < 5)
    {
        iPrice = 0;
    }
    else if(iAge >= 5 && iAge < 18)
    {
        iPrice = 700;
    }
    else if(iAge >= 18 && iAge < 50)
    {
        iPrice = 999;
    }
    else if(iAge >= 50 )
    {
        iPrice = 500;
    }

    return iPrice;
}

int main()
{
    int iAge = 0 , iRet = 0 ;

    cout<<"Enter your age : ";
    cin>>iAge;

    iRet = CalculateTicket(iAge);

    cout<<"Ticket Price is : "<<iRet<<"\n";


    return 0;
}