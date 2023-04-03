#include "main.h"
#include <stdio.h>

/**
 * more_numbers - a function that prints the numbers, from 0 to 14,
 * 10 times followed by a new line.
 */

void more_numbers(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int n;

		for (n = 0; n <= 14; n++)
		{
			if (n < 10)
			{
				_putchar(n  + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar ('\n');
	}
}
