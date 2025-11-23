import java.util.Scanner;

////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Description :    Prints numbers starting from 1 and 
//                   continues row-wise until (iRow * iCol).
//  Input :          Integer (iRow), Integer (iCol)
//  Output :         Void
//  Author :         Samruddhi Vinayak Rupanawar
//  Date :           21/11/2025
//
////////////////////////////////////////////////////////////
    
class Pattern
{
    
    void Display(int iRow, int iCol)
    {
        if (iRow <= 0 || iCol <= 0)
        {
            return;
        }

        int i = 0;
        int j = 0;
        int k = 1;

        for (i = 1; i <= iRow; i++)
        {
            for (j = 1; j <= iCol; j++)
            {
                System.out.print(k + "\t");
                k++;
            }
            System.out.println();
        }
    }
}

/////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
////////////////////////////////////////////////////////////


class Assignment28_5
{
   
    public static void main(String[] A)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter the number of Rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Columns:");
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
//  Input : iRow = 3, iCol = 4
//  Output :
//           1   2   3   4
//           5   6   7   8
//           9   10  11  12
////////////////////////////////////////////////////////////
