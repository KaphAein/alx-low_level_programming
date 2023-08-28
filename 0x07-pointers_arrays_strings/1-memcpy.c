#include "main.h"

/**
 * _memcpy - function that takes elements
 * @dest: element
 * @src: element
 * @n: element
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
