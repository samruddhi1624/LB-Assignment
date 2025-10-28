/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  CheckEqual
//  Description :     Accept two numbers from user and 
//                  check wheteher that numbers are equal 
//                  to each other or not          
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEqual(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
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
   int iValue1 =0;
    int iValue2 =0;

   bool bRet =false;

   printf("Please Enter  First Number\n");
   scanf("%d",&iValue1);

   printf("Please Enter Second Number\n");
   scanf("%d",&iValue2);

   bRet =CheckEqual(iValue1,iValue2);

   if(bRet == true)
   {
        printf(" Both  the Numbers Are Equal\n");
   }
   else
   {
        printf("Both the Numbers Are not Equal\n");
   }
        return 0;
}