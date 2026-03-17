// Description : Write a program that accepts number from the user & returns 
//               factorial of the given number.

// Description : Write a program to check whether the number is perfect number or not.

#include<iostream>
using namespace std;

class Calculate
{
    public :
        int iNo;

    Calculate(int iNo)
    {
        this->iNo = iNo;
    }

    public : 

        int Factorial()
        {
            int iCnt = 0;
            int iFact = 1;

            for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
            {
                iFact = iFact * iCnt;
            }

            return iFact;

        }

};


int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    Calculate sobj(iValue);

    iRet = sobj.Factorial();

    cout<<"Factorial is : "<<iRet<<"\n";
    

    return 0;
}