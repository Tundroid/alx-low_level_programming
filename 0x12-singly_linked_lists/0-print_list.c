#include "lists.h"

/**
* print_lists - prints a linked list
* @h: linked list
*
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return nodes;
}
