#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int n, b;

	for (n = 0; n <= 9; n++)
	{
		for (b = 0; b <= 9; b++)
		{
			int times;

			times = n * b;
			if (times < 10 && b != 0)
                        {
                                _putchar(' ');
                        }
			if (times >= 10)
			{
			_putchar('0' + (times / 10));
			}
			_putchar('0' + (times % 10));
			if (b == 9)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
