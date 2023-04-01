#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: the input string
 */

void puts_half(char *str)
{
	int i, a, l;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	l = i;
	if ((l % 2) == 0)
	{
		for (a = (l / 2) ; a < l; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		for (a = ((l - 1) / 2); a < l; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
