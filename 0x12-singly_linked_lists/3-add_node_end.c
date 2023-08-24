#include "lists.h"

/**
 *_strlen - returns the length of a string
 *@s: the string whose length to return
 *Return: the length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: head of the list
 *@str: string to add to list
 *Return: address of new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	int length = _strlen(str);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
