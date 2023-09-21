#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print in reverse
 */
void print_rev(char *s)
{
    if (s)
    {
        int length = 0;
        int i;

        /* Calculate the length of the string */
        while (s[length])
        {
            length++;
        }

        /* Print the string in reverse order */
        for (i = length - 1; i >= 0; i--)
        {
            putchar(s[i]);
        }

        /* Print a new line */
        putchar('\n');
    }
}
