///////////////////////////////////////////////////////
//
//  File name  : 11.3.c
//  Description: Accept range from user and print the 
//               sum of the numbers in that range
//  Author     : Samruddhi Vinayak Rupanawar
//  Date       : 28/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
int SumRange(int iNo1,int iNo2)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo1 < 0)
    {
        printf("Invalid Range");
        return -1;
    }
    if(iNo2 < 0)
    {
        printf("Invalid Range");
        return -1;
    }

    if(iNo1 > iNo2)
    {
        printf("Invalid Range");
        return -1;
    }

    for(iCnt = iNo1 ; iCnt <= iNo2; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Your starting Number\n");
    scanf("%d",&iValue1);

    printf("Enter Your Ending Number\n");
    scanf("%d",&iValue2);

    iRet = SumRange(iValue1,iValue2);

    if(iRet != -1)
    {
        printf("%d is Sum of the Range\n", iRet);
    }
   
    return 0;
}