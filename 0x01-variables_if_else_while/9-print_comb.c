#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* using putchar */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, coma = 44, space = 32;

	for (num = 48 ; num < 58; ++num)
	{
		putchar(num);
		if (num == 57)
		{
			continue;
		}
		putchar(coma);
		putchar(space);
	};
	return (0);
}
