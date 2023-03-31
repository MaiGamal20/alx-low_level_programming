#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses the content of
 * an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 */
void reverse_array(int *a, int n)
{
	int i, st;

	i = 0;
	for (i = 0; i < n; i++)
	{
		st = a[i];
		a[i] = a[n];
		a[n--] = st;
	}
}
