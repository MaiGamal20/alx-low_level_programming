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
	int alpha;

	for (alpha = 97 ; alpha <= 122; ++alpha)
	{
		if (alpha != 101 && alpha != 113)
		{
		putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
