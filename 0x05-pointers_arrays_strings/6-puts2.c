#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: the input string
 */

void puts2(char *str)
{
	int i, a, l;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	l = i;
	for (a = 0; a <= l ; a++)
	{
		if ((a % 2) == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
