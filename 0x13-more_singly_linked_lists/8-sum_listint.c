#include "lists.h"
/**
 * sum_listint - the sum of all the data (n) of a listint_t linked list.
 * @head: first element
 * Return: sum.
 */
int sum_listint(listint_t *head)
{
	int i;
	const listint_t *nodo;
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

