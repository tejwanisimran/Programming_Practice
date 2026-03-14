// Description : Accpet the age from the user 
/*Start 
     Accept the age from user
        If age is less than 5 thn there will be no ticket
        If age is in between 5 to 18 then the ticket will be of price 700
        If age is in between 18 to 50 then the ticket will be of price 999
        If age is greater than 50 then the ticket will be of price 500
*/

import java.util.Scanner;

class CalculateTicket
{
  int Calculate(int iAge)
  {
    int iPrice = 0;

    if(iAge <= 5)
    {
      iPrice = 0;
    }
    
    if(iAge > 5 && iAge <= 18)
    {
      iPrice = 700;
    }
    else if(iAge > 18 && iAge <= 50)
    {
      iPrice = 999;
    }
    else if(iAge > 50)
    {
      iPrice = 500;
    }

    return iPrice;
  }
}



class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your age : ");
        int iAge = sobj.nextInt();

       CalculateTicket cobj = new CalculateTicket();
       int iRet = cobj.Calculate(iAge);

       System.out.println("The price of ticket is : "+iRet);

       sobj.close();
    }
}