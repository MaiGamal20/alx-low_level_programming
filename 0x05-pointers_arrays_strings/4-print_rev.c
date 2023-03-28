#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i;
	int a;
	int l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	for (a = l - 1; a >= 0; --a)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
