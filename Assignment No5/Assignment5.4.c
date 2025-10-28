/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  CheckNumberType
//  Description :    Check positivr Negative or Zero
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

void CheckNumberType(int iNo)
{
    if(iNo <0)
    {
        printf("It is a Negative Number");
    }
    else if(iNo >0)
    {
        printf("It is a Positive Number");
    }
    else
    {
        printf("It is a Zero");
    }

}

int main()
{
   int iValue1 =0;

   printf("Enter  Number\n");
   scanf("%d",&iValue1);

    CheckNumberType(iValue1);

    return 0;
}