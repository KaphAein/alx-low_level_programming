#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * @head: list to  be handled by function
 * @str: string inside node
 * Return: number adress of new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL )
			temp->next;
		temp->next = new;
		return (*head);
}
