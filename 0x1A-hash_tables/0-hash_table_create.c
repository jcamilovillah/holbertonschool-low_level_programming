#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **new_node;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	
	new_node = malloc(sizeof(hash_node_t *) * size);
	if (new_node == NULL)
	{
		free(new_table);
		return (NULL);
	}
	
	for(i = 0; i < size; i++)
		new_node[i] = NULL;
		
	new_table->size = size;
	new_table->array = new_node;
	return (new_table);
}
