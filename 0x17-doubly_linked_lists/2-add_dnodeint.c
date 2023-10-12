#include "lists.h"

/**
* add_dnodeint - adds a node to a linked list
* @head: of linked list
* @n: integer to add to list
*
* Return: address of new node or null on failure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (*head);
}
