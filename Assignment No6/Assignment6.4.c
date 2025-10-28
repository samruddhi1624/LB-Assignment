/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  Multiply
//  Description :     Accept three numbers from user and 
//                    return its Multiplication
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1,int iNo2, int iNo3)
{
    int iMult =1;
    if(iNo1!=0)
    {
        iMult = iMult*iNo1;
    }
    if(iNo2!=0)
    {
        iMult = iMult*iNo2;
    }
    if(iNo3!=0)
    {
        iMult = iMult*iNo3;
    }
    return iMult;
}

int main()
{
   int iValue1 =0;
    int iValue2 =0;
    int ivalue3 =0;
    int iRet =0;

    printf("Please Enter  First Number\n");
   scanf("%d",&iValue1);

   printf("Please Enter Second Number\n");
   scanf("%d",&iValue2);

   printf("please Enter Third Number\n");
   scanf("%d",&ivalue3);

   iRet =Multiply(iValue1,iValue2,ivalue3);

   printf("%d",iRet);

        return 0;
}