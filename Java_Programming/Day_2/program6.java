// Description : Write a program that prints numbers from 1 to 4 using for loop

class Display
{
    public void display()
    {
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= 4 ; iCnt++)
        {
            System.out.print(iCnt+"\t");
        }
    }
}

class program6
{
    public static void main(String A[])
    {
        Display dobj = new Display();

        dobj.display();
    }
}