#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hashtable
 * @key: is key
 * Return: value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}

	current_node = ht->array[index];

	while (current_node != NULL && strcmp(current_node->key, key) != 0)
	{
		current_node = current_node->next;
	}

	return ((current_node == NULL) ? (NULL) : (current_node->value));
}
