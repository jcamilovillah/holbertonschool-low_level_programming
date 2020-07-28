#include "lists.h"
/**
 * pop_listint - delete the head node.
 * @head: first element
 * Return: void.
 */
int pop_listint(listint_t **head)
{
	if (*head != NULL)
	{
		listint_t *aux_delete;

		aux_delete = *head;
		int f = 0;

		aux_delete = aux_delete->next;
		free(*head);
		f = aux_delete->n;

		return (f);
	}
	return (0);
}
