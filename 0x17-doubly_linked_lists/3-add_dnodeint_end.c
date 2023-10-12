#include "lists.h"

/**
* add_dnodeint_end - adds a node to the end of a linked list
* @head: of linked list
* @n: integer to node add to list
*
* Return: address of new node or null on failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (node != NULL)
	{
		node->n = n;
		node->next = NULL;
		if (*head == NULL)
		{
			node->prev = NULL;
			*head = node;
		}
		else
		{
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = node;
			node->prev = tmp;
		}
	}
	return (node);
}
