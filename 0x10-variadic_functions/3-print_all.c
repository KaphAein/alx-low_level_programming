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
	unsigned int a = 0;
	char * str;
	va_start(args, format);

	while (format[a] != '\0')
	{
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		if (format[a + 1] != '\0')
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(args);
}
