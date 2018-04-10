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
#include <ctype.h>

int main(int argc, char** argv)
{
    if(strchr(*argv, 'h') != NULL)
    {
        for(int index = 0; index < argc; ++index)
        {
            char test;
            test = *argv[index];

            if(isxdigit(test))
            {
                printf("%d\n", test);
            }
            else
            {
                if(index == 1)
                {
                    puts("Invalid input...");
                }
            }
        }
    }
    else
    {
        for(int index = 0; index < argc; ++ index)
        {
            char test;
            test = *argv[index];

            if(isdigit(test))
            {
                printf("%x\n", test);
            }
            else
            {
                if(index == 1)
                {
                    puts("Invalid input...");
                }
            }
        }
    }
    return 0;
}
