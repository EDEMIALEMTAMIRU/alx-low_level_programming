#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - main entery
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
}
