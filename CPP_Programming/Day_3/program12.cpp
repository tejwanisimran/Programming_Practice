// Description : Write a program to check whether the number is number is 
//               divisible by 3 or not.

// Description : Write a program that accepts number from the user & returns 
//               summation of all numbers till that numbers.

// Description : Write a program that accepts number from the user & returns 
//               factorial of the given number.

// Description : Write a program to check whether the number is perfect number or not.

#include<iostream>
using namespace std;

class Check
{
    public :
        int iNo;

    Check(int iNo)
    {
        this->iNo = iNo;
    }

    public : 

        bool CheckDivisible()
        {
            bool bFlag = false;

            if((iNo % 3 == 0) && (iNo % 5 == 0))
            {
                bFlag = true;
            }
    
            return bFlag;
        }

};


int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iValue;
    Check cobj(iValue);

    bRet = cobj.CheckDivisible();

    if(bRet == true)
    {
        cout<<"It is divisible by 3 & 5\n";
    }
    else
    {
        cout<<"It is not divisible by 3 & 5\n";

    }

    return 0;
}