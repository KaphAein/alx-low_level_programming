#include "main.h"

/**
 * times_table - function that prints multiplications table.
 *
 *
 */

void times_table(void)
{
	int i;
	int j;
	int mult;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (mult < 10 && j != 9)
			{
			mult = i * j;
			_putchar(mult + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
			if (mult < 10 && j == 9)
			{
			mult = i * j;
			_putchar(mult + '0');
			}
			else if (mult >= 10 && j != 9)
			{
			mult = i * j;
			_putchar(mult / 10 + '0');
			_putchar(mult % 10 + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			else if (mult >= 10 && j == 9)
			{
				mult = i * j;
			_putchar(mult / 10+ '0');
			_putchar(mult % 10+ '0');
			}
			j++
		}
		_putchar('\n');
		i++;
	}
}
