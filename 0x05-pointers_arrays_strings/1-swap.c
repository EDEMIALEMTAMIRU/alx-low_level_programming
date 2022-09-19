#include <stdio.h>
#include "main.h"
/**
 * swap_int - function that swaps the values of two
 * @a: input parameter
 * @b: input parameter
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
