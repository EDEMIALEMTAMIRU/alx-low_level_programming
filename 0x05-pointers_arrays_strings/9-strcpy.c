#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies the string pointed
 * @dest: input one
 * @src: input tw0
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src[i] != '\0')
		i++;
	j = i;
	i = 0;
	while (j <= i)
	{
		if (j < i)
			*dest[j] = *src[j];
		else
			*dest[j] = '\n';
		j++;
	}
	return (*dest)
}
