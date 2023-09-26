#include "lists.h"

/**
 * free_listint2 - function frees list
 * @head: list to be handled by function
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head == NULL;
}
