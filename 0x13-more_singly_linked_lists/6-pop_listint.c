#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *old;
	int n;

	if (head == NULL)
		return (0);

	old = *head;
	if (old == NULL)
		return (0);

	n = old->n;
	*head = old->next;
	free(old);
	return (n);
}
