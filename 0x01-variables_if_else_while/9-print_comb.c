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
	int num;

	for (num = 48 ; num < 58; ++num)
	{
		putchar(num);
		putchar(' ,');
	};
	putchar('$');
	return (0);
}
