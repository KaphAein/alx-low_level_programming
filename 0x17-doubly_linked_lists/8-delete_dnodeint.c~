#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: List head
 * @index: node index
 * Return: nth node or NULL if none
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current = head;

	for (i = 0; i < index && current; i++)
		current = current->next;

	return (current);
}
