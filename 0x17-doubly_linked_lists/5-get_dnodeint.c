#include "lists.h"

/**
* get_dnodeint_at_index - delete head a linked list
* @head: of linked list
* @index: node to be returned
*
* Return: node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	size_t n = 0;

	while (head)
	{
		if (n++ == index)
			break;
		tmp = head->next;
		head = tmp;
	}
	return (head);
}
