#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints anthing, followed by a new line.
 * @format: number of args
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int a = 0, b = 0;
	char c;
	int i;
	float f;
	char *s;
	const char * const cifs = "cifs";

	va_start(args, format);

	while (format !='\0')
	{
		while (cifs[b])
		{
			if (format[a] == cifs[b] &&
				format[(a + 1)] != '\0')
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			c = va_arg(args, char);
			printf("%c", c);
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			break;
		case 'f':
			f = va_arg(args, float);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;

		}
		a++
	}
	printf("\n");
	va_end(args);
}
