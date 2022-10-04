#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - copys of a string
 * @str: input string
 * Return: always 0
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *strr;

	i = 0;
	if (str == NULL)
		return (NULL);
	else
	{
		while (*str != '\0')
		{
			i++;
		}

		strr = (char *)malloc((i + 1) * sizeof(char));
		
		if (strr == 0)
			return (NULL);
		for (j = 0; str[j] != '\0'; j++)
		{
			*(strr + j) = *(str + j);
		}
		free(str);
		return (strr);
	}
}
