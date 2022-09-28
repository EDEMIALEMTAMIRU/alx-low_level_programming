#include "main.h"
/**
 * factorial - function of factorial
 * @n: input number
 * Return:  always  0 for success and -1 for error
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
