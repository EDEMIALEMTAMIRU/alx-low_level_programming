#include <stdio.h>
#include "main.h"
/**
 * print_rev -  prints a string, in reverse, 
 * @s: input parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\n')
	{
		i++;
	}
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	printf("\n");
}
