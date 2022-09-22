#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalize all words
 * @str: inuput string
 * Return: Always 0
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}
