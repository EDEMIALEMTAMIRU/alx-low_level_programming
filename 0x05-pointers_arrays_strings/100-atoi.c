#include <stdio.h>
#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: input parameter
 * Return: 0
 */
int _atoi(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			s[j] = s[i];
			j++;
		}
		else
			continue;
		i++;
	}
	return (*s);
}
