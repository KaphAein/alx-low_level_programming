#include "main.h"

/**
* puts_half - function that takes a pointer
* @str: pointer
* Return: void
*/

void puts_half(char *str)
{
	int i, size, hfsz;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	size = i - 1;
	if (size % 2 == 0)
		hfsz = size / 2;
	else if (size % 2 != 0)
		hfsz = (size - 1) / 2;
	i = 0;
	while (str[hfsz] != '\0')
	{
		_putchar(str[hfsz]);
		hfsz++;
	}
	_putchar('\n');
}
