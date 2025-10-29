/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : 7.2
//  Description :    Accept one number from user and 
//                  print numbers till that number on 
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

    for(icnt = 1; icnt<=iNo; icnt++)
    {
        printf("%d\t",icnt);
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