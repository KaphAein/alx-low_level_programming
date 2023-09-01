#include "main.h"

/**
 * _strncat - function that takes pointers
 * @dest: element
 * @src: element
 * @n: element
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
