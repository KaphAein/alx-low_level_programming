#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabet
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	int i = 97;
	int j;

	while (j < 10)
	{

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
	j++;
	}
}
