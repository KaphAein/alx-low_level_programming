#include "lists.h"

/**
 * free_listint - function frees list
 * @head: list to be handled by function
 * Return: void
 */

void free_listint(listint_t *head)
{
	list_t *current;

	if (head == NULL)
	{
		free(head);
		return;
	}
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->n);
		free(current);
	}
}
