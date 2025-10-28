/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  FactDiff
//  Description :    Accept number from user and Display
//                  Difference between Summation of
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    if(iNo <= 0)
    {
        return 0;
    }
        int icnt = 0;
        int iSum1 =0;
        int iSum2=0;

    for(icnt = 1;  icnt<iNo; icnt++)
    {
        if((iNo%icnt)==0)
        {
            iSum1 = iSum1+icnt;
        }
        else
        {
            iSum2 = iSum2-icnt;
        }
    }

    return iSum1-iSum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("Difference between Summation of all its factors and Non-Factors is%d\n",iRet);

    return 0;
}