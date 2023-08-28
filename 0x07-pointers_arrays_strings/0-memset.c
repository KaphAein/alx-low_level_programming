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
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	 return (s);
}
