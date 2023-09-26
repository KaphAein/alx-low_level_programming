#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: list to be handled by function
 * Return: void
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int value;

	if (head == NULL)
	{
		return (0);
	}
	current = *head;
	value = current->n;
	*head  = current->next;
	free(current);

	return (value);
}
