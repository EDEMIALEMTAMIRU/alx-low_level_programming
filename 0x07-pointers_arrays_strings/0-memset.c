#include "main.h"
/**
 * _memset - Functions that fills memory with constants
 * @s: pontted
 * @b: constant bytes
 * @n: bytes of memory
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
