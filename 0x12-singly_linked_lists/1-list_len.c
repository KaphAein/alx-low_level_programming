#include "lists.h"

/**
 * list_len - function returns number of elements
 * @h: list to  be handled by function
 * Return: number of elments in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
