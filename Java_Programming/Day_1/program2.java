// Description : Write a program to calculate the percentage .
import java.util.Scanner;

class CalculatePercentage
{
    float Percentage(int iObtained , int iTotal)
    {
        float fPercentage = 0.0f;

        fPercentage = (float)iObtained / (float)iTotal * 100;

        return fPercentage;
    }
}

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iObtained = 0 ;
        int iTotal = 0; 
        float fRet = 0.0f;

        System.out.print("Enter Obtained marks : ");
        iObtained = sobj.nextInt();

        System.out.print("Enter Total marks : ");
        iTotal = sobj.nextInt();

        CalculatePercentage cobj = new CalculatePercentage();

        fRet = cobj.Percentage(iObtained, iTotal);

        System.out.println("Total Percentage is : "+fRet);

        sobj.close();
    }
}