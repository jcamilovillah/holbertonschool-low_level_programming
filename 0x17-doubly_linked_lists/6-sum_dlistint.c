#include "lists.h"
/**
 * sum_dlistint - the sum of all the data (n) of a listint_t linked list.
 * @head: first node
 * Return: sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int i;
	const dlistint_t *nodo;
	int sum = 0;

	nodo = head;

	if (nodo == NULL)
		return (0);

	for (i = 0; nodo != NULL; i++)
	{
		sum += nodo->n;
		nodo = nodo->next;
	}

	return (sum);
}

