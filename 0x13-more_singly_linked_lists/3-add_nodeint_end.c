#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @n: element int
 * @head: first element of linked list
 * Return: adress for the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *last;

	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);

	last->n = n;
	last->next = NULL;

	if  (*head == NULL)
	{
		*head  = last;
		return (last);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next =  last;

	return (last);
}
