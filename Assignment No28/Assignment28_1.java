///////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
///////////////////////////////////////////////////////////////////////////////////


import java.util.*;

////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  28.1
//  Description :     Displays alphabets starting from 'A' up
//                   to iCol columns, repeated for iRow rows.          
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          21/11/2025
//          
/////////////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i=0,j=0;
        char ch ='\0';

        for(i=1;i<=iRow;i++)
        {
            for(j=1,ch='A';j<=iCol;j++,ch++)
            {
                System.out.printf("%c\t",ch);
            }
            System.out.println();
        }
    }

}
class Assignment28_1
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