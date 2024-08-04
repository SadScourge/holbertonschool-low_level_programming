#include "lists.h"

/**
 * add_node - add a node at the beginning of the list
 * @head: head of the linked list
 * @str: string to put in the node data
 * Return: created node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = *head;
	*head = node;
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
