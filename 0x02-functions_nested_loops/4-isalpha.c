#include "main.h"

/**
 * _isalpha - function tests for any lower-case letters.
 *@c: The character to be checked.
 *
 * Return: 1 if the character is lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c>= 65 && c<= 90)
		return (1);
	else
		return (0);
}
