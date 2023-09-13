#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: element
 * @size: element
 * @cmp: function
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			break;

	return (i);
}
