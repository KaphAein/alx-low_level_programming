#include "main.h"

/**
 * _strstr - function that takes elements
 * @haystack: element
 * @needle: element
 * Return: cahr
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		while (*haystack == *needle && *needle != '\0' && *haystack != '\0')
		{
			haystack++;
			needle++;
			i++;
		}
		if (*needle == '\0')
			return (haystack - i);
		haystack -= (i - 1);
		needle -= i;
	}
	return ('\0');
}
