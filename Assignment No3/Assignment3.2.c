/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description :    Accept number from user and print 
//                   factors of that number
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i =0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    int icnt = 0;
    for(icnt = 1 ; icnt<=iNo/2 ; icnt++)
    {
        if ((iNo%icnt)==0)
        {
            printf("%d\t",icnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}