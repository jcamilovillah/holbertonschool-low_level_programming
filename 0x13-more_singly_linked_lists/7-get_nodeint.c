#include "lists.h"
/**
 * get_nodeint_at_index - adds a new node at the beginning of a listint_t list.
 * @index: index
 * @head: first node
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nodo = head;

	if (head)
	{
		for (i = 0; i < index; i++)
		{
			if (head == NULL)
			{
				return (NULL);
			}
			head = nodo->next;
		}
		return (head);
	}
	return (NULL);
}
