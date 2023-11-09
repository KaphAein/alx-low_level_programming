#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node at idx
 * @h: List head
 * @idx: node index
 * @n: node data
 * Return: the address of the new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	current = *h;

	for (i = 0; i < idx && current; i++)
	{
		current = current->next;
	}

	if (current)
	{
		new_node->prev = current->prev;
		new_node->next = current;

		if (current->prev)
			current->prev->next = new_node;

		current->prev = new_node;
	}
	else
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
