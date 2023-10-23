#include "lists.h"

/**
 * sum_dlistint - Return the sum of the values of a doubly linked list
 * @head: pointer to current head node
 * Return: sum of the values of a doubly linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
