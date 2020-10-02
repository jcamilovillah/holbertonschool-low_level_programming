#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: table
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *aux = "";

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			printf("%s'%s': '%s'", aux, (ht->array[i])->key, (ht->array[i])->value);
			aux = ", ";
			ht->array[i] = (ht->array[i])->next;
		}
	}
	printf("}\n");
}
