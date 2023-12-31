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
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
