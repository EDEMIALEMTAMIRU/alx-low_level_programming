#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: input one
 * @src: input two
 * n: number of characters to be copied
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j, x;
	char des[98];

	j = x = 0;

	while (dest[x] != '\0')
	{
		des[x] = dest[x];
		x++;
	}
	des[x] = '\0';

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (des[j] != '\0')
	{
		dest[j] = des[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
