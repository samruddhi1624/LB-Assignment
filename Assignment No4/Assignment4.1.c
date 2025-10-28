/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact 
//  Description :    Accept number from user and 
//                  Display Multiplication of its Factors
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    if(iNo <= 0)
    {
        return 0;
    }
    int icnt = 0;
    int iMult = 1;

    for(icnt = 1;  icnt<=iNo/2;icnt++)
    {
        if((iNo%icnt)==0)
        {
            iMult = iMult*icnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multipliction of factor is %d",iRet);

    return 0;
}