#include "lists.h"

/**
* delete_dnodeint_at_index - inserts node at index of linked list
* @head: of linked list
* @index: node to be returned
*
* Return: node at index
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *del;
	size_t i = 0;

	if (!head)
		return (-1);
	tmp = *head;
	if (index == 0 && *head)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (++i == index)
		{
			if (!(tmp->next))
				break;
			del = tmp->next;
			tmp->next = tmp->next->next;
			if (tmp->next)
				tmp->next->prev = tmp;
			free(del);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
