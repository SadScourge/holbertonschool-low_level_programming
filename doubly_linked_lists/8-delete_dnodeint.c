#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at the given index
 * @head: pointer to the first node
 * @index: index of th Nth node
 * Return: 1 if suceed -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);
	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
