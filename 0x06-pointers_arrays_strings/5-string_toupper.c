#include "main.h"
/**
 * string_toupper - function that takes elements
 * @s: first string.
 * Return: char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		s[i] -= 32;

		else
			continue;
	}
	return (s);
}
