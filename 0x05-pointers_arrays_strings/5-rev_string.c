#include <main.h>

/**
 * rev_string - Reverse a string in place.
 * @s: This is the string to reverse.
 *
 * Return: Void.
 */
void rev_string(char *s)
{
    int len, i;
    char tmp;

    len = strlen(s);
    for (i = 0; i < len / 2; i++)
    {
        tmp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = tmp;
    }
}
