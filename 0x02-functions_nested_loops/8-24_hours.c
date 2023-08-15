#include "main.h"

/**
 *  jack_bower - function that prints minutes of a day.
 *
 *
 */

void jack_bauer(void)
{
	int i;
	int j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		int firsthour = i / 10;
		int seconhour = i % 10:
		_putchar(firstmin + '0');
		_putchar(secondmin + '0');
		_putchar(':');
		while (j < 60)
		{
			int firstmin = j / 10;
			int secondmin = j % 10:
			_putchar(firstmin + '0');
			_putchar(secondmin + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
