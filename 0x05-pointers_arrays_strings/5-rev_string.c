#include <stdio.h>
#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: input parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j;
	char x;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		x = s[j];
		s[i] = x;
		i--;
		j++;
	}
}
