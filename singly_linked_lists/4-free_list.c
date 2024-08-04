#include "lists.h"

/**
 * free_list - free the linked list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head->str);
		head = head->next;
		free(temp);
	}
}
