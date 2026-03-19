// Descriptikn : Write a program that accepts number from the user & returns 
//               its sum of factors & non-factors

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

    void FactorsNonFactors()
    {
        int iCnt = 0;
        int iSum1 = 0;
        int iSum2 = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum1 = iSum1 + iCnt;
            }
            else
            {
                iSum2 = iSum2 + iCnt;
            }
        }

        cout<<"Summation of factors is : "<<iSum1<<"\n";
        cout<<"Summation of non-factors is : "<<iSum2<<"\n";

    }
};


int main()
{
    int iValue = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    Summation sobj(iValue);

    sobj.FactorsNonFactors();

    return 0;
}