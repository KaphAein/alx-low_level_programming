#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter and updates the value it points to to 98.
 * @n: element
 * return: void
 */

void reset_to_98(int *n)
{
	int *p;

	p = &n;
	*p = 98;
}
