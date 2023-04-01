#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i, a;
	char revS = s[0];

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (a = 0; a < i; a++)
	{
		i--;
		revS = s[a];
		s[a] = s[i];
		s[i] = revS;
	}
}
