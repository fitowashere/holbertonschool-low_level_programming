#include "hash_tables.h"

/**
 * hash_table_print - gets input
 * @ht: stores value
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}

