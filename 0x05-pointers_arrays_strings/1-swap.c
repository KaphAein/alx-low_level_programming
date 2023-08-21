#include "main.h"

/**
* swap_int - function that takes a pointer
* @a: pointer
* @b: pointer
* return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
