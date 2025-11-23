/*
    INPUT:
        Rows = 4
        Columns = 4

    OUTPUT:
            *
            *       *
            *       *       *
            *       *       *       *
*/

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Prints '*' when (i >= j) i.e., lower
//                  triangular region including diagonal.
//                  Prints blank space otherwise.
//  Input :         int iRow, int iCol
//  Output :        Void
//  Author :        Samruddhi Vinayak Rupanawar
//  Date :          22/11/2025
////////////////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow <= 0 || iCol <= 0)
    {
        printf("INVALID INPUT\n");
        printf("ROWS AND COLUMNS MUST BE POSITIVE\n");
        return;
    }

    if (iRow != iCol)
    {
        printf("INVALID INPUT\n");
        printf("NUMBER OF ROWS AND COLUMNS SHOULD BE SAME\n");
        return;
    }

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i >= j)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns:\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}

