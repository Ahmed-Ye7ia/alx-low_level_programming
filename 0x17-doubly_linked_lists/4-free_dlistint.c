#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to current head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
