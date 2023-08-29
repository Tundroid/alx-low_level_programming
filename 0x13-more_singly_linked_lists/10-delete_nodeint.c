#include "lists.h"

/**
* delete_nodeint_at_index - inserts node at index of linked list
* @head: of linked list
* @index: node to be returned
*
* Return: node at index
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	size_t i = 0;

	if (!head)
		return (-1);
	tmp = *head;
	if (index == 0 && *head)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (++i == index)
		{
			if (!(tmp->next))
				break;
			tmp->next = tmp->next->next;
			free(tmp->next);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
