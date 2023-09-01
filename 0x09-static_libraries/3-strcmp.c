#include "main.h"
/**
 * _strcmp - function that takes pointers
 * @s1: element
 * @s2: element
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
