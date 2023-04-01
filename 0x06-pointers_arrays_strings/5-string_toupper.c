#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 * @str: input string.
 * Return: uppercase letter
 */

char *string_toupper(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
	}
	return (str);
}
