#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head of linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *old;
	int sum = 0;

	if (head == NULL)
		return (0);

	old = head;

	while (old != NULL)
	{
		sum += old->n;
		old = old->next;
	}

	return (sum);
}
