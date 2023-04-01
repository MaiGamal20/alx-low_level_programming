#include "main.h"
#include <stdio.h>

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: input string.
 * Return: uppercase letter
 */

char *cap_string(char *str)
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
			if (str[(j - 1)] == '\t' || str[(j - 1)] == '\n' || str[(j - 1)] == ','
					|| str[(j - 1)] == ' ' || str[(j - 1)] == ';' || str[(j - 1)] == '.'
					|| str[(j - 1)] == '!' || str[(j - 1)] == '?'
					|| str[(j - 1)] == '(' || str[(j - 1)] == ')'
					|| str[(j - 1)] == '{' || str[(j - 1)] == '}')
			{
				str[j] = str[j] - 32;
			}
		}
	}
	return (str);
}
