#include "lists.h"
/**
 * list_len - prints the number of data in a node
 * @h: the head of the node
 *
 * Return: the number of data in the node
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	const list_t *new;

	new = h;

	while (new->next != NULL)
	{
		if (new->str != NULL || new->str != NULL)
		{
			++n; }
		else
		{
			++n; }
		new = new->next;
	}
	if (new->str != NULL || new->str != NULL)
	{
		++n; }
	else
	{
		++n; }
	return (n);
}
