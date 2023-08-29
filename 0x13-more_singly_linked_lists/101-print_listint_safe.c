#include "lists.h"

/**
* print_listint_safe - prints a linked list
* @head: linked list
*
* Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	listint_t *tmp0 = NULL, *tmp1 = NULL;
	size_t i, nodes = 0;

	tmp0 = (listint_t *)head;
	while (tmp0 != NULL)
	{
		printf("[%p] %d\n", (void *)tmp0, tmp0->n);
		i = 0;
		tmp0 = tmp0->next;
		tmp1 = (listint_t *)head;
		++nodes;
		while (i < nodes)
		{
			if (tmp0 == tmp1)
			{
				printf("-> [%p] %d\n", (void *)tmp0, tmp0->n);
				return (nodes);
			}
			tmp1 = tmp1->next;
			i++;
		}
		if (head == NULL)
			exit(98);
	}
	return (nodes);
}
