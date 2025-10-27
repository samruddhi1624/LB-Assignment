/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define True 1
#define False 0
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description :    Accept one character And Display  if 
//                  its a Vowel or Display if its 
//                  not a vowel
//  Input:          int
//  Output :        int
//  Author:         Samruddhi Vinayak Rupanawar
//  Date :          26/10/2025
//          
/////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckVowel (char cValue)
{
    if( cValue =='a' || cValue =='A'||
        cValue =='e' || cValue =='E'||
        cValue == 'i'|| cValue == 'I'||
        cValue =='o' || cValue =='O' ||
        cValue =='u' || cValue =='U' )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char cValue ='\0';
    bool bRet = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet== True)
    {
        printf("Its vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}
