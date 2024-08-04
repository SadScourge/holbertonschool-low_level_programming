#include "lists.h"

/**
 * dlistint_len - count the number of nodes
 * @h: pointer to the first node
 * Return: number of node printed
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
