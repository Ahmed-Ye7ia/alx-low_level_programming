#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a doubly linked list
 * @head: address of pointer to current head node
 * @n: New value
 * Return: Address of new node or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
