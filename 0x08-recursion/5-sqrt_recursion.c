#include "main.h"
/**
 * _sqrt - square root of a number
 * @n: input number
 * @i: root
 * Return: always 0
 */

int _sqrt(int n, int i)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_sqrt(n, i + 1));
	else if  (i * i == n)
		return (i);
	return (-1);
}
/**
 * _sqrt_recursion - square root of a number
 * @n: input number
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, i));
}
