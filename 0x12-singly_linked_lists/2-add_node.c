#include "lists.h"

/**
* add_node - adds a node to a linked list
* @head: of linked list
* @str: string to add to list
*
* Return: address of new node or null on failure
*/
list_t *add_node(list_t **head, const char *str)
{
	/*list_t *node = malloc(sizeof(list_t));

	if (head == NULL || node == NULL)
		return (NULL);
	if (node != NULL)
	{
		node->str = strdup(str);
		node->len = strlen(node->str);
		node->next = *head;
		*head = node;
	}
	return (*head);*/
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
