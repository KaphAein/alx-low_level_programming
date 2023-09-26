#include "lists.h"

/**
 * print_lisintt - function that prints all the elements of a list.
 * @h: list to  be handled by function
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	printf("%d\n", h->n);
	count++;
	h = h->next;

	return (count);
}
