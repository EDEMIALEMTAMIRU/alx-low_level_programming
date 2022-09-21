#include <stdio.h>
#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @str: string
 * Return: Always0
 */
char string_toupper(char str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] + 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
