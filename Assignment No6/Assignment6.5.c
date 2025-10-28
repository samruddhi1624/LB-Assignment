/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :  Percentage
//  Description :     Accept total marks and obtained marks 
//                     from user and give its percentage
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(float fTotalMarks, float fObtainedMarks)
{
    float fper =0.0f;

    fper =(fObtainedMarks/fTotalMarks)*100;

    return fper;
}

int main()
{
    int iValue1 =0;
    int iValue2 =0;
    float fRet =0.0f;

    printf("Enter Total Marks\n");
   scanf("%d",&iValue1);

   printf("Enter Obtained Marks\n");
   scanf("%d",&iValue2);

   fRet =Percentage(iValue1,iValue2);

   printf("Your percentage is %f",fRet);

        return 0;
}