/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Description :    Accept number from user and print 
//                   factors of that number
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    int icnt = 0;

    for(icnt =1; icnt<=iNo;icnt++)
    {
        if((iNo%icnt)==0)
        {
            if((icnt%2)==0)
            {
                printf("%d\t",icnt);
            }
        }
    }
}

int main()
{
    int iValue =0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}