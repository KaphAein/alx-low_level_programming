#include "lists.h"

/**
 * free_list - function frees list
 * @head: list to  be handled by function
 * Return: void
 */

void free_list(list_t *head)
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
		free(current->str);
		free(current);
	}
}
