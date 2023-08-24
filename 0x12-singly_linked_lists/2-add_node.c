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
	list_t *node = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);
	if (node != NULL)
	{
		node->str = strdup(str);
		node->len = strlen(node->str);
		node->next = *head;
		*head = node;
	}
	return (node);
}
