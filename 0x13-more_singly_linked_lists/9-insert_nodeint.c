#include "lists.h"

/**
* insert_nodeint_at_index - inserts node at index of linked list
* @head: of linked list
* @idx: node to be returned
* @n: data for new node
*
* Return: node at index
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *node;
	size_t i = 0;

	node = malloc(sizeof(listint_t));
	tmp = *head;
	node->n = n;
	if (!head || !node)
		return (NULL);
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (tmp)
	{
		if (++i == idx)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
