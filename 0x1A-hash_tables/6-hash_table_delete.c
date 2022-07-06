#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: memory address for hash_tables header.
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	i = 0;
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
		++i;
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
