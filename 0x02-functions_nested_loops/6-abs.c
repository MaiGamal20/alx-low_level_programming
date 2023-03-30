#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @x: number to get its abslute value
 * Return: abslute value of the input
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		int y;

		y = -x;
		return (y);
	}
}
