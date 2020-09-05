#include "lists.h"
/**
 * add_dnodeint_end - that adds a new node at the end of a dlistint_t list.
 * @head: first node
 * @n: nodes
 * Return: Elements.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = new;
	new->prev = aux;

	return (new);
}
