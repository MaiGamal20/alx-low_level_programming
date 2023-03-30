#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int h10, h1, m10, m1;

	for (h10 = 0; h10 <= 2; h10++)
	{
		for (h1 = 0; h1 <= 9; h1++)
		{
			while ((h10 <= 1 && h1 <= 9) || (h10 <= 2 && h1 <= 3))
			{
				for (m10 = 0; m10 <= 5; m10++)
				{
					for (m1 = 0; m1 <= 9; m1++)
					{
						_putchar('0' + h10);
						_putchar('0' + h1);
						_putchar(':');
						_putchar('0' + m10);
						_putchar('0' + m1);
						_putchar('\n');
					}
				}
			}
		}
	}
}
