#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hashtable
 * @key: is key
 * @value: value associated with the key
 * Return: 1 success, 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new;
	char *valueDup;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	valueDup = strdup(value);
	if (valueDup == NULL)
		return(0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valueDup;
			return(1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->value = valueDup;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
