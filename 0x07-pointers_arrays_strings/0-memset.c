#include "main.h"

/**
 * _memset - function that takes elements
 * @s: element
 * @b: element
 * @n: element
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
}
