#include "main.h"

/**
 * _strcat - function that takes pointers
 * @dest: element
 * @src: element
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
