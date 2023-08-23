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

	while (dest[j] != '\0')
	{
		j++;
	}

	for (i = 0; i >= 0; i++)
	{
		*(dest + j) = *(src + i);
		if (*(src + i) == '\0')
			break;
		j++;
	}

	return (dest);
}
