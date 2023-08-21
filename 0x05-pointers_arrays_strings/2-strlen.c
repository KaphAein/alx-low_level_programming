#include "main.h"

/**
* _strlen - function that takes a pointer
* @s: pointer
* return: int value
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
