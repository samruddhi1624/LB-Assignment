/*
    Example:
    INPUT  : iRow = 4,  iCol = 4

    OUTPUT :
                1       2       3       4
               -1      -2      -3      -4
                1       2       3       4
               -1      -2      -3      -4
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
//  Description :    Prints +ve numbers on odd rows and
//                   -ve numbers on even rows.
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
                printf("%d\t", j);
            }
        }
        else             
        {
            for (j = 1; j <= iCol; j++)
            {
                printf("%d\t", -j);
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


