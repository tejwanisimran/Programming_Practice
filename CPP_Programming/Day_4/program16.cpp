// Description : Write a program that accepts number from the user &  
//               check whether that number is prime or not

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

    bool Prime()
    {
        bool bFlag = true;
        int iCnt = 0;

        for(iCnt = 2 ; iCnt < iNo/2 ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                bFlag = false; 
            }
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

    bRet = cobj.Prime();

    if(bRet == true)
    {
        cout<<"It's an prime number...";
    }
    else
    {
        cout<<"It's not an prime number...";
    }


    return 0;
}