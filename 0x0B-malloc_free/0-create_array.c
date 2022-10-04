#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - create an array of Chars
 * @size: the input byte size
 * @c: the input characyers
 * Return: always 0 on succes
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size != 0)
	{
		char *ptr;
	       ptr = malloc(size * sizeof(char));

		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
