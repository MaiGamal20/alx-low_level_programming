#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers from n
 * to 98, followed by a new line.
 * @n: the start num to count from
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n ; n <= 98 ; n++)
		{
			if (n != 98)
			{
			printf("%d, ", n);
			}
			if (n == 98)
			{
				printf("%d", n);
			}

		}
		printf("\n");
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			if (n != 98)
			{
			printf("%d, ", n);
			}
			if (n == 98)
			{
				printf("%d", n);
			}
		}
		printf("\n");
	}
}
