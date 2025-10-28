/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  ChechEvevOdd
//  Description :    Take number from user and Check if
//                    its Even or not
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

int FindMax(int iNo1,int iNo2)
{
    if (iNo1 >iNo2)
    {
        return iNo1;
    }
    if (iNo2 >iNo1)
    {
        return iNo2;
    }

}

int main()
{
   int iValue1 =0;
   int iValue2 =0;
   int iRet =0;

   printf("Enter a First number\n");
   scanf("%d",&iValue1);

   printf("Enter a Second number\n");
   scanf("%d",&iValue2);

   iRet =FindMax(iValue1,iValue2);
   
   printf("%d is an a maximum number\n",iRet);

        return 0;
}