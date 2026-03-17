// Description : Write a program to check whether the number is even or odd.

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

        bool CheckEven()
        {
            bool bFlag = false;

            if(iNo % 2 == 0)
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

    bRet = cobj.CheckEven();

    if(bRet == true)
    {
        cout<<"It is an even number...\n";
    }
    else
    {
        cout<<"It is an odd number...\n";

    }

    return 0;
}