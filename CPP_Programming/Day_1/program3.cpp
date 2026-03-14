// Description : Take the percentage as the input from the user and display the class
/*
    Start
    Accept the percentage from the user
      If the percentage is less than 0 and greater than 100 
        display as invalid input
      If percentage is greater than 0 and less than 35 
        display as fail
      If percentage is greater than 35 and less than 50
        display as pass class
      If percentage is greater than 50 and less than 60
        display as second class
      If percentage is greater than 60 and less than 70
        display as first class
      If percentage is greater than 70 and less than 100
        display as first class with distinction          
*/

#include<iostream>
using namespace std;

void DisplayClass(float fPerc)
{
    if(fPerc <= 0.0f || fPerc > 100.0f)
    {
        cout<<"There is no result for this percentage as input is Invalid..!!\n";
    }

    if(fPerc > 0.0f && fPerc <= 35.0f)
    {
        cout<<"Fail...\n";
    }
    else if(fPerc > 35.0f && fPerc <= 50.0f)
    {
        cout<<"Pass Class...\n";
    }
    else if(fPerc > 50.0f && fPerc <= 60.0f)
    {
        cout<<"Second Class...\n";
    }
    else if(fPerc > 60.0f && fPerc <= 70.0f)
    {
        cout<<"First Class...\n";
    }
    else if(fPerc > 70.0f && fPerc <= 100.0f)
    {
        cout<<"First Class With Distinction...\n";
    }
}


int main()
{
    float fPercentage = 0.0f;

    cout<<"Enter your percentage : ";
    cin>> fPercentage;

    DisplayClass(fPercentage);

    return 0;
}

