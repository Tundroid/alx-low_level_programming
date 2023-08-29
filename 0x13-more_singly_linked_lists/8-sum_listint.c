#include "lists.h"

/**
* sum_listint - sums all node data in a linked list
* @head: of linked list
*
* Return: sum of node data
*/
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	while (head)
	{
		sum += head->n;
		tmp = head->next;
		head = tmp;
	}
	return (sum);
}
