#include <stdio.h>
#include "main.h"
/**
 * _puts - function that prints a string
 * @str: input
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
