#include "main.h"
/**
 * _strlen - function to get the length of string
 * @s: the string
 *
 * Return: Te length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	};
	return (i);
}
