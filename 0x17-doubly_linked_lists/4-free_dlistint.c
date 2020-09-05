#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: first node
 * @head: pointer to head
 * Return: Elements.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodo;

	if (head)
	{
		while (head != NULL)
		{
			nodo = head;
			head = head->next;
			free(nodo);
		}
	}
	return ();
}
