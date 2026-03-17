// Description : Write a program that accepts number from the user & returns 
//               summation of all numbers till that numbers.

// Description : Write a program that accepts number from the user & returns 
//               factorial of the given number.

// Description : Write a program to check whether the number is perfect number or not.

#include<iostream>
using namespace std;

class Summation
{
    public :
        int iNo;

    Summation(int iNo)
    {
        this->iNo = iNo;
    }

    public : 

        int Addition()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
            {
                iSum = iSum + iCnt;
            }

            return iSum;

        }

};


int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    Summation sobj(iValue);

    iRet = sobj.Addition();

    cout<<"Summation is : "<<iRet<<"\n";
    

    return 0;
}