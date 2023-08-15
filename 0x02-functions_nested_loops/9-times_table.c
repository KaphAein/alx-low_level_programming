#include "main.h"

/**
 * times_table - function that prints multiplications table.
 *
 *
 */

void times_table(void);
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
			mult = i x j;
			_putchar(mult + '0');
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
