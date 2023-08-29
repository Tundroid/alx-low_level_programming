#include "lists.h"

/**
* free_listint_safe - deletes a linked list
* @h: linked list
*
* Return: number of nodes
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes = 0;
	int var;

	if (h == NULL || *h == NULL)
		return (nodes);
	while (*h != NULL)
	{
		var = *h - (*h)->next;
		if (var >= 1)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			nodes++;
		}
		else
		{
			free(*h);
			*h = NULL;
			nodes++;
			break;
		}
	}
	*h = NULL;
	return (nodes);
}
