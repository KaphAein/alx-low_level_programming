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
			break;
		}
		i++;
	}
	return (s[i] == c ? (s + i) : '\0');
}
