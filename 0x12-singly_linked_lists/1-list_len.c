#include "lists.h"

/**
 *list_len - a function that return the number of elements in list
 *@h: pointer to first node
 *Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
