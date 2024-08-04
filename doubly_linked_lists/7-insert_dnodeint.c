#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at the given index
 * @h: head of the linked list
 * @idx: index of the list where the new node should be added
 * @n: number to put in the node data
 * Return: pointer to the created node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index;
	dlistint_t *node;
	dlistint_t *current = *h;

	if (*h == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (current)
	{
		for (index = 0; index < idx; index++)
		{
			if (index == idx - 1)
			{
				if (current->next == NULL)
					return (add_dnodeint_end(h, n));
				node->next = current->next;
				node->prev = current;
				current->next->prev = node;
				current->next = node;
				return (node);
			}
			else
			{
				current = current->next;
			}
		}
	}
	free(node);
	return (NULL);
}
