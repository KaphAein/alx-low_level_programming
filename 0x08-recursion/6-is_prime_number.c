#include "main.h"

/**
* _is_prime - function
* @x: element
* @y: element
* Return: int
*/

int _is_prime(int x, int y)
{
	if (x <= 1)
		return (0);
	if (x % y == 0)
		return (0);
	if (y * y > x)
		return (1);
	return (_is_prime(x, y + 1));
}

/**
 * is_prime_number- function
 * @n: element
 * Return: int
 */

int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}
