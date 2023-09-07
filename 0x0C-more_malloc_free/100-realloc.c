#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, for ptr
 * @new_size: new size, in bytes of new memory block
 * Return: pointer to the newly created array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i, *a, size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	a = malloc(new_size);
	if (a == 0)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			a[i] = ptr[i];
		for (; i < new_size; i++)
			a[i] = NULL;
	}
	else
		for (i = 0; i < new_size; i++)
			a[i] = ptr[i];
	free(ptr);
	return (a);
}
