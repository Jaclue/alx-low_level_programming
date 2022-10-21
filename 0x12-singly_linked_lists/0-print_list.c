#include "lists.h"

/**
 * print_list - prints every element of a list_t list
 * @h: pointer
 * Return: the number of the nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	int i;
	const list_t *c = h;

	for (i = 0; c; i++)
	{
		if (c->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", c->len, c->str);
		c = c->next;
		len++;
	}
	return (len);
}
