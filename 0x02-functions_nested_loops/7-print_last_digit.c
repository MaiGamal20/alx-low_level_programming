#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: a number to get its last digit.
 *
 * Return: the last digit of the input number.
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = (n % 10);
	_putchar(lastDigit);
	return (lastDigit);
}
