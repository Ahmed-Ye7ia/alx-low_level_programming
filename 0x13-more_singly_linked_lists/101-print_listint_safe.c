#include "lists.h"

/**
 *print_listint_safe - function that prints a linked list with a loop safely.
 *@head: pointer to the head node
 *Return:  the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_1 = NULL;
	const listint_t *tmp_2 = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp_1 = head;
	while (tmp_1)
	{
		printf("[%p] %d\n", (void *)tmp_1, tmp_1->n);
		counter++;
		tmp_1 = tmp_1->next;
		tmp_2 = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (tmp_1 == tmp_2)
			{
				printf("-> [%p] %d\n", (void *)tmp_1, tmp_1->n);
				return (counter);
			}

			tmp_2 = tmp_2->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
