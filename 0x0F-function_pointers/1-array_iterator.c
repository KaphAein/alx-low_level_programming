#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator -  executes a function
 * @array: element
 * @size: element
 * @action: function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}