#include "hash_tables.h"
/**
 * hash_table_get- gets input
 * @ht: stores value
 * @key: stores key
 * Return: results
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht || !key)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
