#include "main.h"
/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[ ] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');
	return (0);
}
