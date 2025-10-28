/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  CheckLeepYear
//  Description :    Check Leap Year
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

int CheckLeepYear(int iYear)
{
    if((iYear % 400)==0)
    {
        printf("It is a Leap year");
    }
    else if((iYear % 4)==0)
    {
        printf("It is a Leap year");
    }
    else if((iYear % 100)==0)
    {
        printf("It is a leap year");
    }
    else
    {
        printf("It is Not a Leap Year");
    }

}

int main()
{
   int iYear =0;

   printf("Enter Your Year\n");
   scanf("%d",&iYear);

    CheckLeepYear(iYear);

    return 0;
}