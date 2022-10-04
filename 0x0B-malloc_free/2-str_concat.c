#include "main.h"
#include <stdlib.h>

/**
 * str_concat - string concactination
 * @s1: input1
 * @s2: input 2
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *nuh;

	i = 0;
	j = 0;
	while (*(s1 + 1))
	{
		i++;
	}
	while (*(s2 + j))
	{
		j++;
	}

	nuh = realloc(s1, sizeof(char) * (j + i + 2));

	if (nuh == NULL)
		return (NULL);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(nuh + i + j) = *(s2 + j);
	}
	*(nuh + i + j) = '\0';
	return (nuh);
}


