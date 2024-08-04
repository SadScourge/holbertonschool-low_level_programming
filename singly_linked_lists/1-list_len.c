#include "lists.h"

/**
 * list_len - count the number of nodes
 * @h: pointer to the first node
 * Return: number of node printed
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
