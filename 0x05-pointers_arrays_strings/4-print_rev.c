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
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	printf("\n");
}
