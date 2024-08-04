#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of the list
 * @head: head of the linked list
 * @n: number to put in the node data
 * Return: created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *current = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = node;
	node->prev = current;
	return (node);
}
