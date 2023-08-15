#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabet
 *
 * return: void
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
