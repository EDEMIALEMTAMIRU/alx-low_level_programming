#include "main.h"
/**
 * reset_to_98 - function that takes a pointer to an int as parameter and updates the value
 * @*n: pointer parameter
 * Return: 0
 */
void reset_to_98(int *n)
{
	int a;

	n = &a;
	*n = 98;

	_putchar("a = %d\n", a);
}