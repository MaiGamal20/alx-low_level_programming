#include "main.h"
/**
 * _islower - a function that checks for lowercase character.
 * @c: The character to be checked
 *
 * Return: On success 1 for lowercase.
 * On error, 0 is returned otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
