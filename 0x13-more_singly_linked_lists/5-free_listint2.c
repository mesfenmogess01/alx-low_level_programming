#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * Description: at the end, the head will point to NULL.
 * @head: head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *old;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		old = *head;
		*head = (*head)->next;
		free(old);
	}
}
