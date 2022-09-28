#include "main.h"
/**
 * _pow_recursion - power of a numbers
 * @x: base input number
 * @y: raised input number
 * Return: always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
