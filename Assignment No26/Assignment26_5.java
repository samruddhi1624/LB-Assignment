////////////////////////////////////////////////////////////
//
//  File name :     Assignment26_5
//  Description :   This program displays first 'iNo' even 
//                  numbers (2, 4, 6, ...)
//  Author :        Samruddhi Vinayak Rupanawar
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*
    INPUT  : 5
    OUTPUT : 2   4   6   8   10
*/

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int icnt=0;

        for(icnt =1; icnt<=iNo; icnt++)
        {
          System.out.print((icnt*2)+"\t");
        }

        System.out.println();
    }
}

class Assignment26_5
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