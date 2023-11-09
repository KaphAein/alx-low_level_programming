#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlist
 * @h: List head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h && h->next)
		{
			count ++;
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (count);
}
