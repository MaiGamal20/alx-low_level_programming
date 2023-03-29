#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - function prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 1; a <= 10; a++)
	{
		print_alphabet();
	}
}
