/*
    Example:
    INPUT  : iRow = 4,  iCol = 5

    OUTPUT :
                2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9
*/

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name :  Display
//  Description :    Prints even numbers on odd rows and
//                   odd numbers on even rows.
//  Input :          Integer (iRow), Integer (iCol)
//  Output :         Void
//  Author :         Samruddhi Vinayak Rupanawar
//  Date :           21/11/2025
//
////////////////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if (iRow <= 0 || iCol <= 0)
    {
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        if (i % 2 != 0)       
        {
            for (j = 1; j <= iCol; j++)
            {
                printf("%d\t", 2 * j);
            }
        }
        else                 
        {
            for (j = 1; j <= iCol; j++)
            {
                printf("%d\t", (2 * j) - 1);
            }
        }

        printf("\n");
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows :\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns :\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}
// End of main

