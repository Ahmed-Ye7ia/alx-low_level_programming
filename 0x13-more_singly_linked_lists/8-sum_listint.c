#include "lists.h"

/**
 *sum_listint - returns sum of all data
 *@head: pointer to head node
 *Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
