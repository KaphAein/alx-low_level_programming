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
	int firsthour;
	int seconhour;
	int firstmin;
	int secondmin;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			firstmin = j / 10;
			secondmin = j % 10;
			firsthour = i / 10;
			seconhour = i % 10;
			_putchar(firsthour + '0');
			_putchar(seconhour + '0');
			_putchar(':');
			_putchar(firstmin + '0');
			_putchar(secondmin + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
