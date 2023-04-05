#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @src: source
 * @dest: destenation
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++)
	{
		dest[n] = src[n];
		n--;
	}
	return (dest);
}
