
///////////////////////////////////////////////////////
//
//  File name  : 12.3.c
//  Description: Accept number from user and return sum 
//               of factors of that number
//  Author     : Samruddhi vinayak Rupanawar
//  Date       : 28/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
int Sum_Factor(int iNo)
{
    if(iNo <= 0)
    {
        return iNo;
    }
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ )
    {
        if((iNo%iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    iRet = Sum_Factor(iValue);
    printf("Sum of factors is %d",iRet);


    return 0;
}
