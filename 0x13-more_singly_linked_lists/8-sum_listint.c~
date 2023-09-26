#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: list to  be handled by function
 * @index: of node
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
