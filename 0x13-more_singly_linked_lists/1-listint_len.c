#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list `listint_t`.
 * @h: linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n_element = 0;
	const listint_t *old = h;

	while (old != NULL)
	{
		old = old->next;
		n_element++;
	}
	return (n_element);
}
