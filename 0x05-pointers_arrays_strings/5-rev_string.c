#include <stdio.h>
#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: input parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j, y;
	char x;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	y = i;
	for (i--, j = 0; j < y / 2; i--, j++)
	{
		x = s[j];
		s[j] = s[i];
		s[i] = x;
	}
}
