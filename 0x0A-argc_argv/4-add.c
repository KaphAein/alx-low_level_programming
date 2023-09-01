#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - function
 * @s: element
 * Return: On success 1.
 */

int _isnumber(char *s)
{
	int i = 0, r = 1, d = 0;

	if (*s == '-')
		i++;
	for (i; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));
		if (d == 0)
		{
			r = 0;
			break;
		}
	}
	return (r);
}

/**
 * main - Entry point
 * @argc: element
 * @argv: element
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, sum  = 0, r = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				sum += atoi(argv[i]);
			else
				r = 1;
		}
	}
	if (r == 0)
		printf("0\n");
	else
		printf("Error\n");

	return (r);
}
