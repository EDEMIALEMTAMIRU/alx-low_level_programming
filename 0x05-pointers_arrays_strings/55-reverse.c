#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverse the string
 * Return: always 0
 */
void rev_string(char *s)
{
	int j, i = 0;

	while (s[i] != '\0')
		i++;
	--i;
	char ss[i];
	while (i >=0)
	{
		ss[j] = s[i];
		i--;
	}
	s = ss;
}

