#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: input string
 * @c: the located charecter
 * Return: Alwas 0
 */
char *_strchr(char *s, char c)
{
	int i, nn, j;
	char b;

	i = nn = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			nn = 1;
			for (j = 0; s[i] != '\0'; j++, i++)
			{
				b = *s[i];
				*s[j] = b;
			}
			break;
		}
		i++;
	}
	if (nn == 0)
		return (0);
	else
		return (s);
}
