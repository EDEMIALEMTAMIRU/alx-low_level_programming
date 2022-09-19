#include <stdio.h>
/**
 * main - prints the size of array
 * Return: 0
 */
int main(void)
{
	char b[98];

	printf("b: %p\n", b);
	printf("&b: %p\n", &b);
	printf("sizeof(b): %lu\n", sizeof(b));
	printf("szeof(&b): %lu\n", sizeof(&b));
	return (0);
}
