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
import java.util.Scanner;

class DisplayClass
{
    void display(float fPercentage)
    {
      if(fPercentage <= 0.0f || fPercentage > 100.0f)
      {
        System.out.println("Invalid input...");
      }

      if(fPercentage > 0.0f && fPercentage <= 35.0f)
      {
        System.out.println("Fail...");
      }
      else if(fPercentage > 35.0f && fPercentage <= 50.0f)
      {
        System.out.println("Pass Class...");
      }
      else if(fPercentage > 50.0f && fPercentage <= 60.0f)
      {
        System.out.println("Second Class...");
      }
      else if(fPercentage > 60.0f && fPercentage <= 70.0f)
      {
        System.out.println("First Class...");
      }
      else if(fPercentage > 70.0f && fPercentage <= 100.0f)
      {
        System.out.println("First Class With Distinction...");
      }

    }
}

class program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your percentage : ");
        float fPercentage = sobj.nextFloat();

        DisplayClass dobj = new DisplayClass();

        dobj.display(fPercentage);

        sobj.close();

    }
}