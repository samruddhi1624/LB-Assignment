////////////////////////////////////////////////////////////
//
//  File name :     Assignment26_2
//  Description :   This program displays numbers in reverse
//                  order along with '#' symbol.
//  Author :        Samruddhi Vinayak Rupanawar
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*
    INPUT:
        5

    OUTPUT:
        5   #   4   #   3   #   2   #   1   #
*/

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int icnt=0;
        for(icnt = iNo; icnt>=1; icnt--)
        {
          System.out.print(icnt+"\t#\t");
        }

        System.out.println();
    }
}

class Assignment26_2
{
  public static void main(String A[])
    {
        Scanner sobj= new Scanner(System.in);
        int iValue =0;

        System.out.println("Enter the frequency :");
        iValue =sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }  
}