#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: pointer to a string
 * Return: converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int len, bin;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	i = 0;
	for (len--, bin = 1; len >= 0; len--, bin *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			i += bin;
	}
	return (i);
}
