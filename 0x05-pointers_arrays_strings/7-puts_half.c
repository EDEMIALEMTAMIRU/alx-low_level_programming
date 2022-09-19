#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input
 * Return: 0
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
		j = i / 2 + 1;
	else
		j = i / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
