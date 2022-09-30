#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - main entery
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main (int argc, char *argv[])
{
	int i, j, x, z;
	int trigger = 0;
	int sum;
	
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		z = atoi(argv[i]);
		for (j = 32; j < 48; j++)
		{
			for (x = 58; x < 128; x++)
			{
				if (z == j || z == x)
				{
					trigger = 1;
					printf("Error\n");
					return (1);
					break;
				}
			}
		}
	}
	if (trigger == 0 && argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			z = atoi(argv[i]);
			sum = sum + z;
		}
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
