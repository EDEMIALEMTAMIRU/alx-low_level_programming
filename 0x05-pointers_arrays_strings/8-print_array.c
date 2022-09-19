#include <stdio.h>
#include "main.h"
/**
 * print_array -  prints n elements of an array of integers,
 * @a: input
 * @n: input
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			_putchar(44);
			_putchar(32);
		}
		i++;
	}
	_putchar('\n');
}
