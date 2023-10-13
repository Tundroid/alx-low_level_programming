#include "lists.h"

/**
* insert_dnodeint_at_index - inserts node at index of linked list
* @h: of linked list
* @idx: node to be returned
* @n: data for new node
*
* Return: node at index
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *node;
	size_t i = 0;

	node = malloc(sizeof(dlistint_t));
	if (!h || !node)
		return (NULL);
	tmp = *h;
	node->n = n;
	if (idx == 0)
	{
		node->next = *h;
		node->prev = NULL;
		if (*h)
			(*h)->prev = node;
		*h = node;
		return (node);
	}
	while (tmp)
	{
		if (++i == idx)
		{
			node->next = tmp->next;
			node->prev = tmp;
			tmp->next = node;
			return (node);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
