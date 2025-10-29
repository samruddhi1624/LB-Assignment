/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description :     Accept one number from user and 
//                  print that number of $* on the 
//                  screen
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

void Display( int iNo)
{
    int icnt =0;

    if(iNo <0)
    {
        iNo =-iNo;
    }

    for(icnt = 0; icnt<iNo; icnt++)
    {
        printf("$\t*\t");
    }
    
    printf("\n");
  
}

int main()
{
    int iValue =0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}