#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of the list
 * @head: head of the linked list
 * @n: number to put in the node data
 * Return: created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}
