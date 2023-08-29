#include "lists.h"

/**
* free_listint_safe - deletes a linked list
* @h: linked list
*
* Return: number of nodes
*/
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	int var;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		var = *h - (*h)->next;
		if (var > 0)
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
