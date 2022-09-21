#include <stdio.h>
#include "main.h"
/**
 * _strcmp - function that compares string comparation
 * @s1: input
 * @s2: input string
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, x;

	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i > j)
		x = 15;
	else if (i == j)
		x = 0;
	else
		x = -15;
	return (x);
}
