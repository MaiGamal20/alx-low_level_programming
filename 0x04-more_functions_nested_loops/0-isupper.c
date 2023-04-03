#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase character.
 * @c: input character to check uppercase
 * Return: 1 for success and 0 otherwise
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
