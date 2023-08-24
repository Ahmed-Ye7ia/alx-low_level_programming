#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		}
		else
		{
			printf("[%d] %s\n", 0, h->str ? h->str : "(nil)");
		}
		h = h->next;
		i++;
	}
	return (i);
}
