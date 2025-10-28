/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  FindMax
//  Description :    Take three Numbers from user and and give
//                  Maximum of Three Numbers          
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

int FindMax(int iNo1,int iNo2,int iNo3)
{
    int iMax = iNo1;

    if (iNo2 >iMax)
    {
        return iNo2;
    }
    if (iNo3 >iMax)
    {
        return iNo3;
    }

}

int main()
{
   int iValue1 =0;
   int iValue2 =0;
   int iValue3 =0;
   int iRet =0;

   printf("Enter a First number\n");
   scanf("%d",&iValue1);

   printf("Enter a Second number\n");
   scanf("%d",&iValue2);

   printf("Enter a Third Number\n");
   scanf("%d",&iValue3);

   iRet =FindMax(iValue1,iValue2,iValue3);
   
   printf("%d is an a maximum number\n",iRet);

        return 0;
}