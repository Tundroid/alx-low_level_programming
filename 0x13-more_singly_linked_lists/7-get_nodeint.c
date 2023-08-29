#include "lists.h"

/**
* get_nodeint_at_index - delete head a linked list
* @head: of linked list
* @index: node to be returned
*
* Return: node at index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
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
