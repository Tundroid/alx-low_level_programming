#include "lists.h"

/**
* find_listint_loop - finds a loop in a linked list
* @h: head of linked list
*
* Return: address of the node where loop starts otherwise NULL
*/
listint_t *find_listint_loop(listint_t *h)
{
	listint_t *tortoise = h;
	listint_t *hare = h;

	if (h != NULL)
	{
		while (tortoise && hare && hare->next)
		{
			hare = hare->next->next;
			tortoise = tortoise->next;
			if (hare == tortoise)
			{
				tortoise = h;
				while (tortoise != hare)
				{
					tortoise = tortoise->next;
					hare = hare->next;
				}
				return (hare);
			}
		}
	}
	return (NULL);
}
