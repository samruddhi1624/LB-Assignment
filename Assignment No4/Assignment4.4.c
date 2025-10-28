/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  SumNonFact
//  Description :    Accept number from user and Display
//                   Sum of its Non-Factors
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    if(iNo <= 0)
    {
        return 0;
    }
        int icnt = 0;
        int iSum =0;

    for(icnt = 1;  icnt<iNo; icnt++)
    {
        if((iNo%icnt)!=0)
        {
            iSum = iSum+icnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}