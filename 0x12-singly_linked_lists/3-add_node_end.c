#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *temp, *temp2;

	new = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (len = 0; str[len])
		len++;

	temp->str = dup;
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else
	{
		temp2 = *head;
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = temp;
	}

	return (*head);
}
