#include "lists.h"
/**
 * dlistint_len - return number of elements of structure.
 * @h: pointer to head.
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *nodo = h;

	for (i = 0; nodo != NULL; i++)
		nodo = nodo->next;

	return (i);
}
