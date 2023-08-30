#include "main.h"

/**
* _sqrt - function
* @x: element
* @y: element
* Return: int
*/

int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - function
 * @n: element
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (_sqrt(n, 1));
}
