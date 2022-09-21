#include <stdio.h>
#include "main.h"
/**
 * _strncat - string concactination
 * @dest: string one to be appended
 * @src: string two which 
 * @n: number of string appended
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (n > 0 && src[j] != '\n')
	{
		dest[i] = src[j];
		j++;
		n--;
		i++;
	}
	return (dest);
}
