#include "main.h"
/**
 * swap_int - function to swap be two values
 * @a: pointer to 1st value
 * @b: pointer to 2nd value
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
