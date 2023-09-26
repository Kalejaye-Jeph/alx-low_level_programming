#include <main.h>

/*
 * rev_string - Reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, len;
	char temp;

	/* find length of the string */
	len = strlen(s);

	/* Reverse the string */
	for (i = 0; i < len / 2; i++) {
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

