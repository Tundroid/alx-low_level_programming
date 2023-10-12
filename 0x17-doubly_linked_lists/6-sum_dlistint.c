#include "lists.h"

/**
* sum_dlistint - sums all node data in a linked list
* @head: of linked list
*
* Return: sum of node data
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	while (head)
	{
		sum += head->n;
		tmp = head->next;
		head = tmp;
	}
	return (sum);
}
