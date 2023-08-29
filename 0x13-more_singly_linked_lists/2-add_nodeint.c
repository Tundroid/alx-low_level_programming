#include "lists.h"

/**
* add_nodeint - adds a node to a linked list
* @head: of linked list
* @n: integer to add to list
*
* Return: address of new node or null on failure
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
