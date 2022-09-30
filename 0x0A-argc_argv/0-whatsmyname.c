#include "main.h"
#include <stdio.h>
/**
 * main - the main function
 * @argc: input argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
