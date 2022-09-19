#include <stdio.h>
#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: input parameter
 * Return: 0
 */
int _atoi(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] >= 48 && s[i] <= 57)
			return (s[i]);
		else
			return (0);
		i++;
	}
}
