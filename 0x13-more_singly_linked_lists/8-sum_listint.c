#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: list to  be handled by function
 * Return: sum or NULL
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int i, sum = 0;

	if (!temp)
		return (0);

	while (temp)
	{
		i = temp->n;
		temp = temp->next;
		sum += i;
	}

	return (sum);
}
