#include "main.h"

/**
 * _puts_recursion - function
 * @s: element
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);

	if (*s == 0)
		_putchar('\n');
	return;
}
