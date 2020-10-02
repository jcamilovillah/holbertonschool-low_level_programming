#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value
 * @key: the key.
 * @value: alue associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	node = add_nodeint(&(ht->array[index]), key, value);
	if (node == NULL)
		return (0);
	ht->array[index] = node;
	return (1);
}
/**
 * add_nodeint - adds a new node at the beginning of a hash_node_t list.
 * @key: key
 * @value: value
 * @h: first node
 * Return: New node.
 */
hash_node_t *add_nodeint(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *aux = *h;

	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (*h);
		}
		aux = aux->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->value = strdup(value);
	new->key = strdup(key);
	new->next = *h;
	*h = new;

	return (new);
}
