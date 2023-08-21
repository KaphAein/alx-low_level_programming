#include "main.h"

/**
* _strcpy - function that takes a pointer
* @dest: pointer
* @src: pointer
* return: char
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for ( i = 0; i >= 0; i++ )
	{
		*(dest + i) = *(src + i);
	}

	return (*dest);
}
