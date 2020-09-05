#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node
 * @index: index
 * Return: Elements.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *nodo;

	if (head != NULL)
	{
		nodo = head;
		for (i = 0; i < index; i++)
		{
			if (nodo == NULL)
			{
				return (NULL);
			}
			nodo = nodo->next;
		}
		return (nodo);
	}
	return (NULL);
}

