#include "main.h"
#include <stdio.h>

/**
 * _memset - function fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	s[n] = b;
	return (s);
}
