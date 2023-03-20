#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* hexa using putchar */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, alpha;

	for (num = 48 ; num < 58; ++num)
	{
		putchar(num);
	};
	for (alpha = 97 ; alpha <= 102; ++alpha)
	{
		putchar(alpha);
	};
	putchar('\n');
	return (0);
}
