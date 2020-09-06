#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: first node
 * @head: pointer to head
 * Return: Elements.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
