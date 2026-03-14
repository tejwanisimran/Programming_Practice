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

#include<stdio.h>

void DisplayClass(float fPercentage)
{
    if(fPercentage < 0.0f || fPercentage > 100.0f)
    {
        printf("There is no result for this percentage as input is Invalid !!\n");
        return -1;
    }

    if(fPercentage >= 0.0f && fPercentage < 35.0f)
    {
        printf("Fail...\n");
    }
    else if(fPercentage >= 35.0f && fPercentage < 50.0f)
    {
        printf("Pass Class...\n");
    }
    else if(fPercentage >= 50.0f && fPercentage < 60.0f)
    {
        printf("Second Class...\n");
    }
    else if(fPercentage >= 60.0f && fPercentage < 75.0f)
    {
        printf("First Class...\n");
    }
    else if(fPercentage >= 75.0f && fPercentage <= 100.0f)
    {
        printf("First Class With Distinction...\n");
    }

}

int main()
{
    float fPercentage = 0.0f;

    printf("Enter your percentage : ");
    scanf("%f",&fPercentage);

    CalculatePercentage(fPercentage);

    return 0;
}