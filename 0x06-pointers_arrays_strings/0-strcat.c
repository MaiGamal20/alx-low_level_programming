#include "main.h"
#include <stdio.h>
/**
 * _strcat - a function that concatenates two strings
 * @dest: 1st string
 * @src: 2nd string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	a = 0;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
