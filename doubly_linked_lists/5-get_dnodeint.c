#include "lists.h"

/**
 * get_dnodeint_at_index - return the Nth node
 * @head: head of the list
 * @index: index corresponding to the Nth node
 * Return: Nth node or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (count != index)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
		count++;
	}
	return (current);
}
