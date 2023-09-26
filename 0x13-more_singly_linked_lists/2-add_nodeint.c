#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * @h: list to  be handled by function
 * @head: first element of linked list
 * Return: adress for the new element
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *first;

	if (head == NULL)
	{
		return (NULL);
	}
	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);


	first->n = n;
	first->next = *head;
	*head = first;
	return (first);
}
