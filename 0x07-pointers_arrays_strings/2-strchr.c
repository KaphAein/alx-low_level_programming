#include "main.h"

/**
 * _strchr - function that takes elements
 * @s: element
 * @c: element
 * Return: char
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		else
			return NULL;
		i++;
	}
}
