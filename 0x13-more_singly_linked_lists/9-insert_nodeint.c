#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of linked list
 * @idx: index to insert the node
 * @n: new node data
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *old;
	listint_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}

	old = *head;

	while (idx != 1)
	{
		old = old->next;
		--idx;
		if (old == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = old->next;
	old->next = new;

	return (new);
}
