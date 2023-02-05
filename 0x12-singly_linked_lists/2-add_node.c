#include "lists.h"

/**
 * add_node - add nodes to the beginnig of a list
 * @head: a pointer to the head of the list
 * @str: the first member of each node added
 *
 * Return: a list of node for success and 0 if malloc
 * to allocate memory
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		printf("malloc could not allocate the requested memory");
		return (0);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
