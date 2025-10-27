/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description :    Accept one character from user and 
//                   convert its case
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert (char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        CValue = CValue + 32;
        printf("%c",CValue);
    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
        CValue = CValue - 32;
        printf("%c",CValue);
    }                         
}

int main()
{
    char CValue ='\0';

    printf("Enter character\n");
    scanf("%c",&CValue);

    DisplayConvert(CValue);

    return 0;
}