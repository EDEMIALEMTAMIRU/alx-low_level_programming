#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - malloc
 * @b: input size
 * Return: always 0 success
 */
void *malloc_checked(unsigned int b)
{
	void **ptr;

	ptr = malloc(b);

	if (ptr == Null)
		return (98);

	return (ptr);
}
