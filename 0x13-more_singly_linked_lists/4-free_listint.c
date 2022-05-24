#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *old;
	listint_t *new;

	old = head;

	while (old != NULL)
	{
		new = old->next;
		free(old);
		old = new;
	}
}
