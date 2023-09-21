#include "lists.h"

/**
 * add_node - function that adds a new node
 * @head: list to  be handled by function
 * @str: string inside node
 * Return: number adress of new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = *head;
	*head = new;

	return (new);
}
