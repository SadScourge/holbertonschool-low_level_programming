#include "lists.h"

/**
 * add_node_end - add a node at the end of the list
 * @head: head of the linked list
 * @str: string to put in the node data
 * Return: created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *current = *head;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (0);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = node;

	return (node);
}

/**
 *_strlen - Get the length of a string
 *@s: string to count
 *Return: return the length of the string
 */
int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != 0)
	{
		length++;
	}
	return (length);
}
