#include "lists.h"
/**
 * print_dlistint - print number of elements of structure.
 * @h: pointer to head.
 * Return: number of elements.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *nodo = h;

	for (i = 0; nodo != NULL; i++)
	{
		printf("%d\n", nodo->n);
		nodo = nodo->next;
	}
	return (i);
}
