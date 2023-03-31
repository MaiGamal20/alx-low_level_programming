#include "main.h"
#include "stdio.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: 1st string input
 * @src: 2nd string input
 * @n: n of bytes input
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a;
	
	i = 0;
	while (dest[i] !='\0')
	{
		i++;
	}

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
