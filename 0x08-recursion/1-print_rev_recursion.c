#include "main.h"

/**
 * _print_rev_recursion - function
 * @s: element
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		--s;
		_putchar(*s);
		_puts_recursion(s - 1);
	}
	if (*s == 0)
		_putchar('\n');
}
