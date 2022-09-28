#include "main.h"
/**
 * check_prime - check primeness
 * @n: input numper
 * @i: multiplier
 * Return: always 0
 */
int check_prime(int n, int i)
{
	if (i == n - 1)
		return (1);
	else if (n % i == 0)
		return (0);
	if (n % i != 0)
	{
		return(check_prime (n, i + 1));
	}
	return (0);
}
/**
 * is_prime_number - is prime
 * @n: input number
 * Return: is aways 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return(check_prime (n, i));
}
