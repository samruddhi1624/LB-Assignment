/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  ChechEvevOdd
//  Description :    Take number from user and Check if
//                    its Even or not
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd (int iNo)
{
    if ((iNo %2) ==0)
    {
        return true;
    }
    else
    {
        return false;
    }

    printf("\n");
}

int main()
{
    int iValue1=0;
    int iRet = false;

    printf("Enter Number\n");
    scanf("%d",&iValue1);

    iRet = CheckEvenOdd(iValue1);

    if(iRet == true)
        {
            printf("It is Even Number");
        }
        else
        {
            printf("It is a Odd Number");
        }

        return 0;
}