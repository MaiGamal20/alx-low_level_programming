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
		if (alpha != 145 && alpha != 161)
		{
		putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
