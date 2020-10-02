#include "hash_tables.h"
/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: hash table.
 * @key: key.
 * Return: value associated with the element, or NULL if key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *aux;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
