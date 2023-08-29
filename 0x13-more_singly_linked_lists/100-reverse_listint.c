#include "lists.h"

/**
 *reverse_listint - a function that reverses a listint_t linked list.
 *@head: pointer to the first node
 *Return: pointer to head after reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
