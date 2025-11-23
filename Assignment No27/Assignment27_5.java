///////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
///////////////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  27.5
//  Description :    Displays a pattern where the row number
//                   is printed iCol times for each row.         
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          21/11/2025
//          
/////////////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i=0,j=0;

        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }
    }

}
class Assignment27_5
{
    public static void main(String A[]) 
    {
         Scanner sobj= new Scanner(System.in);
        int iValue1 =0,iValue2= 0;

        System.out.println("Enter the Number of Rows :");
        iValue1 =sobj.nextInt();

        System.out.println("Enter the Number of column :");
        iValue2 =sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);
    }
    
}