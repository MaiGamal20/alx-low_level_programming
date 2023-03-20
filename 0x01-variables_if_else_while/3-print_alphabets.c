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
	int alpha, upalpha;

	for (alpha = 97 ; alpha <= 122; ++alpha)
	{
		putchar(alpha);
	};
	for (upalpha = 65 ; upalpha <= 90; ++upalpha)
	{
		putchar(upalpha);
	};
	putchar('\n');
	return (0);
}
