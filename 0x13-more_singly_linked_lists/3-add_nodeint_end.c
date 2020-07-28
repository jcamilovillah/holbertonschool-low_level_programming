#include "lists.h"

/**
 * add_nodeint_end - that adds a new node at the end of a listint_t list.
 * @head: first node
 * @n: nodes
 * Return: Elements.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *aux = *head;

	new = malloc(sizeof(listint_t));

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
	return (new);
}
