#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: element
 * @f: ptr to a func
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == 0 || name == 0)
		return;
	f(name);
}
