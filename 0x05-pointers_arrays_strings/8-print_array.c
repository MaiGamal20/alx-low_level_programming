#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: array of integers
 * @n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		int x = a[i];

		if (i != (n - 1))
		{
			printf("%d, ", x);
		}
		else
		{
			printf("%d", x);
		}
	}
	printf("\n");
}
