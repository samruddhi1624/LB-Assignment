/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev 
//  Description :    Accept number from user and 
//                  Display its Factors in Reverse order
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

int FactRev(int iNo)
{
    if(iNo <= 0)
    {
        return 0;
    }
    int icnt = 0;

    for(icnt = iNo/2;  icnt>=1; icnt--)
    {
        if((iNo%icnt)==0)
        {
            printf("%d\t",icnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}