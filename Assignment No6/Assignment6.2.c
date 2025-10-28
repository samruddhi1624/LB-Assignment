/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  CheckGreater
//  Description :    Accept one number from user an 
//                  check wheteher that number is greater
//                  than 100 or not          
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckGreater(int iNo)
{
    if(iNo>100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
   int iValue =0;
   bool bRet =false;

   printf("Please Enter Number\n");
   scanf("%d",&iValue);

   if(bRet == true)
   {
        printf("%d is Greater tha 100\n",iValue);
   }
   else
   {
        printf("%d is not Greater than 100\n",iValue);
   }
        return 0;
}