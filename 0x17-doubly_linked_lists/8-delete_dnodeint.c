#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: List head
 * @index: node index
 * Return: return 1 for success -1 for fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL)
		return (-1);

	current = *head;

	for (i = 0; i < index && current; i++)
		current = current->next;

	if (!current)
		return (-1);
	if (current->prev)
		current->prev->next = current->next;
	else
		*head = current->next;

	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
