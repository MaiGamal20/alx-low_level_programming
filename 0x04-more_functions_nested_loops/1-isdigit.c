#include "main.h"
#include <stdio.h>

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: input character to check if digit
 * Return: 1 for success and 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
