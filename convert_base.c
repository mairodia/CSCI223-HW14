// ============================================================================
// File: convert_base.c
// ============================================================================
// Programmer: Jennifer King
// Date: 4/9/2018
// Project: Convert Base
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// Description:
//              This program will allow the user to convert base ten values to base
//              16 values and back. The program reads these values from the command
//              line.
// ============================================================================

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    if(strchr(*argv, 'h') != NULL)
    {
        if(isxdigit(argv[6]))
        {
            printf("%d\n", argv[6]);
        }
        else
        {
            puts("Invalid input...");
        }
    }
    else
    {
        if(isdigit(argv[6]))
        {
            printf(".2hhX\n", argv[6]);
        }
        else
        {
            puts("Invalid input...");
        }
    }
    return 0;
}
