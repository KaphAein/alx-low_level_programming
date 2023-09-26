#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: list to  be handled by function
 * @index: of node
 * Return: sum or NULL
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	unsigned int i, sum = 0;

	while (temp)
	{
		i = temp->n
		temp = temp->next;
		sum += i;
	}

	return (head ? sum : NULL);
}
