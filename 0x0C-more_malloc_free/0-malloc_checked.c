#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - malloci
 * @b: input memoory size
 * Return: always 0 success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
