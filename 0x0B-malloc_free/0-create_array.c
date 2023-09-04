#include "main.h"

/**
 * *create_array - function
 * @size: element
 * @c: element
 * return: char
 */

char *create_array(unsigned int size, char c)
{
	char *a;

	if (size <= 0)
		return (NULL);
	else
	{
		a = malloc(sizeof(char) * size);
		return (a);
	}
}
