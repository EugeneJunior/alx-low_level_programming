#include "lists.h"
/**
 * print_list - prints all the element of a list
 * @h: the head of the nodes
 *
 * Return: returns the number of data in each node
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	const list_t *new;

	new = h;

	while (new->next != NULL)
	{
		if (new->str != NULL)
		{
			printf("[%u] ", new->len);
			 ++n;
			printf("%s\n", new->str);
			++n; }
		else
		{
			printf("[%u] ", 0);
			++n;
			printf("(nil)\n");
			++n; }
		new = new->next;
	}
	if (new->str != NULL)
	{
		printf("[%u] ", new->len);
		printf("%s\n", new->str); }
	else
	{
		printf("[%u] ", 0);
		printf("(nil)\n"); }
	return (n);
}
