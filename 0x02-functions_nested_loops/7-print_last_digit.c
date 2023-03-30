#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @num: a number to get its last digit.
 *
 * Return: the last digit of the input number.
 */
int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = num % 10;
	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}
