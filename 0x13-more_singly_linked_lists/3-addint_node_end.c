#include "lists.h"

/**
* add_nodeint_end - adds a node to the end of a linked list
* @head: of linked list
* @n: integer to node add to list
*
* Return: address of new node or null on failure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (node != NULL)
	{
		node->n = n;
		if (*head == NULL)
		{
			*head = node;
		}
		else
		{
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = node;
		}
	}
	return (node);
}
