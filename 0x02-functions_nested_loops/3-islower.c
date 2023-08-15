#include "main.h"

/**
 * _islower(int c) - function tests for any lower-case letters.
 *
 * return: int
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
