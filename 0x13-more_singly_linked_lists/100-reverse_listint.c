#include "lists.h"

/**
* reverse_listint - inserts node at index of linked list
* @head: of linked list
*
* Return: node at index
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *tmp2;

	tmp = NULL;
	if (!head || !*head)
		return (NULL);
	if (*head && (*head)->next)
	{
		tmp = *head;
		*head = (*head)->next;
		tmp->next = NULL;
	}
	while (*head && (*head)->next)
	{
		tmp2 = *head;
		*head = (*head)->next;
		tmp2->next = tmp;
		tmp = tmp2;
	}
	(*head)->next = tmp;
	return (*head);
}
