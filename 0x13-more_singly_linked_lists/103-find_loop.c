#include "lists.h"
#include <stdlib.h>

/**
 *find_listint_loop - a function that finds the loop in a linked list.
 *
 *@head: pointer to the head
 *
 *Return: address of node where loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}

	return (NULL);
}
