#include "main.h"
/**
 * jack_bauer - unction that prints every minute of the day of Jack Bauer
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i, j, x, y;

	for (i = 0; i < 3; i++)
	{
		j = x = y = 0;
		for (j = 0; j < 4; j++)
		{
			x = y = 0;
			for (x = 0; x < 6; x++)
			{
				y = 0;
				for (y = 0; y <= 9; y++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(x);
					_putchar(y);
					_putchar('\n');
				}
			}
		}
	}
}
