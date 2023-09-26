#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: list to  be handled by function
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
