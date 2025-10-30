/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Description :   Accept Number from user and return 
//                  its difference btween even and odd 
//                  factorial
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

int  Factorial(int iNo)
{
      int icnt =0;
      int iFact1 =0;
      int iFact2 =0;

      
    if(iNo < 0)
    {
        iNo = -iNo;
    }

      iFact1 =1;
      iFact2 =1;
     for(icnt =1; icnt<=iNo; icnt++)
     {
          if((icnt%2) != 0)
          {
            iFact1 =iFact1*icnt;
          }
          else
          {
            iFact2 =iFact2*icnt;
          }
     }
  
     return (iFact1-iFact2);
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet =Factorial(iValue);
    
    printf("Differance between Even & Odd Factorial of %d is %d",iValue,iRet);

    return 0;
}