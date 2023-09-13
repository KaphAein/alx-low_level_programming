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

	if (size <= 0 || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 0)
			continue;
		if (cmp(array[i]))
			break;
	}
	if (cmp(array[size])
		return (-1);

	return (i);
}
