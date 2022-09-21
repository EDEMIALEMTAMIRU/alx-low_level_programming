#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverse thre contents
 * @a: input one
 * @n: input two
 * Return: Aways 0
 */
void reverse_array(int *a, int n)
{
	int i, j;
	char b;

	i = j = 0;
	while(j < n / 2)
	{

		b = a[j];
		a[j] = a[i];
		a[i] = b;
	}
}
