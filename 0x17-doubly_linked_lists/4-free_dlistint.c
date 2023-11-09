#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - Frees dlinked list
 * @head: List head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (!head)
	{
		return;
	}
	current = head;
	while (current)
	{
		free(current);
		current = current->next;
	}
}
