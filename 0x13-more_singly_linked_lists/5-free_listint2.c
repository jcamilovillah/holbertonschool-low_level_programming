#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: first element
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *nodo = *head;
	if (head && *head)
	{
		while (nodo != NULL)
		{
			nodo = nodo->next;
			free(nodo);
		}
		free(*head);
		*head = NULL;
	}
}
