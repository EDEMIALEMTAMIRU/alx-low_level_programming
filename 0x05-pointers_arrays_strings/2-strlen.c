#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: input parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int i, count;

	count = 0;
	while (s[i] != 0)
	{
		count += count;
		i++;
	}
	return (count);
}
