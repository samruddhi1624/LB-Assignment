////////////////////////////////////////////////////////////
//
//  File name :     Assignment26_4
//  Description :   This program displays numbers from 1 to
//                  the entered value, each surrounded by 
//                  '#' and followed by '*'
//  Author :        Samruddhi Vinayak Rupanawar
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*
    INPUT  : 5
    OUTPUT : #   1   *   #   2   *   #   3   *   #   4   *   #   5   *
*/

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int icnt=0;
        for(icnt =1; icnt<=iNo; icnt++)
        {
          System.out.print("#\t"+icnt+"\t"+"*\t");
        }

        System.out.println();
    }
}

class Assignment26_4
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