
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

	for (alpha = 122 ; alpha >= 97; --alpha)
	{
		putchar(alpha);
	};
	putchar('\n');
	return (0);
}
