/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  NonFact
//  Description :    Accept number from user and print 
//                  non - factors of that number
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

int NonFact(int iNo)
{
    if(iNo <= 0)
    {
        return 0;
    }
    int icnt = 0;

    for(icnt = 1;  icnt<=iNo; icnt++)
    {
        if((iNo%icnt)!=0)
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

    NonFact(iValue);

    return 0;
}