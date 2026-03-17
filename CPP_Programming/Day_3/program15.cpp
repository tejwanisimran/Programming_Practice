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

        bool Perfect()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 1 ; iCnt <= iNo / 2 ; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    iSum = iSum + iCnt;
                }
            }

            return (iSum == iNo);

        }

};


int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : ";
    cin>>iValue;

    Calculate sobj(iValue);

    bRet = sobj.Perfect();

    if(bRet == true)
    {
        cout<<"It is an perfect number...\n";
    }
    else
    {
        cout<<"It is not an perfect number...\n";
    }
    

    return 0;
}