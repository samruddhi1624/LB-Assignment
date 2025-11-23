///////////////////////////////////////////////////////
//
//  File name  : 11.1.c
//  Description: Accept range from user and  print 
//               numbers between that range on 
//               screen
//  Author     : Samruddhi Vinayak Rupanawar
//  Date       : 28/10/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void RangeDisplay( int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid Range");
    }

    for(iCnt = iNo1 ; iCnt <= iNo2; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Your starting Number\n");
    scanf("%d",&iValue1);

    printf("Enter Your Ending Number\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
   
    return 0;
}