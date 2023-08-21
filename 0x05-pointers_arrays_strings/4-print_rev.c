#include "main.h"

/**
* _print_rev - function that takes a pointer
* @s: pointer
* Return: void
*/

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while ((i - 1) >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
