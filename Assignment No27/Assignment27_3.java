///////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
///////////////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  27.3
//  Description :     This program displays a pattern of
//                  reverse numbers with iRow rows and
//                  iCol columns.      
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
            for(j=iCol;j>=1;j--)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
        }
    }

}
class Assignment27_3
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