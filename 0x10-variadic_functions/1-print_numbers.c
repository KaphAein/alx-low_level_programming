#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @n: number of args
 * @separator: string
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(args, n);

	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(args, int), separator);

	va_end(args);
	printf("\n");
}
