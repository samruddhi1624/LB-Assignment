import java.util.Scanner;

////////////////////////////////////////////////////////////
//Function Name :  Display
//  Description :    Displays alphabets starting from 'A'
//                   for iCol columns. Odd rows show
//                   uppercase, even rows show lowercase.
//  Input :          Integer (iRow), Integer (iCol)
//  Output :         Void
//  Author :         Samruddhi Vinayak Rupanawar
//  Date :           23/11/2025
//
////////////////////////////////////////////////////////////
class Pattern
{
 
    void Display(int iRow, int iCol)
    {
        int i=  0;
        int j = 0;
        if (iRow <= 0 || iCol <= 0)
        {
            return;
        }

        for (i = 1; i <= iRow; i++)
        {
            for (j = 0; j < iCol; j++)
            {
                if (i % 2 != 0)
                {
                    System.out.printf("%c",('A' + j) + "\t");
                }
                else
                {
                    System.out.printf("%c",('a' + j) + "\t");
                }
            }
            System.out.println();
        }
    }
}

////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
////////////////////////////////////////////////////////////


class Assignment28_2
{
    public static void main(String[] A)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter the number of Rows :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Columns :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);

        sobj.close();
    }
}
// End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : iRow = 3, iCol = 4
//  Output :
//           A   B   C   D
//           a   b   c   d
//           A   B   C   D
//
