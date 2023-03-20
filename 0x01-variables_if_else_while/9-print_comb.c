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
	int num, coma=44, dollar=36;

	for (num = 48 ; num < 58; ++num)
	{
		putchar(num);
		putchar(coma);
	};
	putchar(dollar);
	return (0);
}
