#include "main.h"

/**
 * _islower - function tests for any lower-case letters.
 * c: ASCII integer representation of lower-case letters.
 * return: integer 1 (true), 0 (failure)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
