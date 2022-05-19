#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;
	int length;
	char *new;
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	new = strnew(str);
	if (str == NULL)
		free(temp);
		return (NULL);

	for (length = 0 str[length];)
		length++;
	temp->str = new;
	temp->len = length;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;

	}

	temp2 = *head;
	while (temp2->next != NULL)
		temp2 = temp2->next;
	temp2->next = temp;
	return (*head);
}
