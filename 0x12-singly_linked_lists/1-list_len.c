#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: nodes.
 * Return: elements.
 */
size_t list_len(const list_t *h)
{
	unsigned int x;
	const list_t *nodo = h;

	for (x = 0; nodo != NULL; x++)
	{
		nodo = nodo->next;
	}
	return (x);
}
