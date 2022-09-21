#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: input one
 * @src: input two
 * @n: number of characters to be copied
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (n > x)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
