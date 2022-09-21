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
	int i, j;

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
		return (15);
	else if (i == j)
		return (0);

	else
		return (-15);
}
