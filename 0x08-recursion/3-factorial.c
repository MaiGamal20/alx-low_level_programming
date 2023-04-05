#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: number to get its factorial.
 * Return: factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0 || n == 1)
		{
			return (1);
		}
		else
		{
			return (n* factorial(n - 1));
		}
	}

}
