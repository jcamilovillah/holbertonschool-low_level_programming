#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position..
 * @h:pointer value.
 * @idx: unsigned int value.
 * @n: int value
 * Return: node address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp = *h;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = tmp;
		*h = node;
		return (node);
	}
	while (i < (idx - 1))
	{
		if (!tmp)
		{
			free(node);
			return (NULL);
		}
		i++;
		tmp = tmp->next;
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
