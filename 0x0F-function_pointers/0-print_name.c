#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - function that prints a name
 * @name: element
 * @f: ptr to a func
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
