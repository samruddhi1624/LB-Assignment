////////////////////////////////////////////////////////////
//
//  File name :     Assignment26_1
//  Description :   This program displays alphabets from A
//                  up to the number of elements entered
//                  by the user (A, B, C, ...)
//  Author :        Samruddhi Vinayak Rupanawar
//  Date :          21/11/2025
//
////////////////////////////////////////////////////////////

/*
    INPUT:
        5

    OUTPUT:
        A   B   C   D   E
*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int icnt =0;
        // int i=65;
        char ch ='A';

        for (icnt =1; icnt<=iNo;icnt++,ch++)
        {
            System.out.printf("%c\t",ch);
            
        }
        System.out.println();
    }
}

class Assignment26_1
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue =0;

        System.out.println("Enter the Frequrcy :");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);

    }
}