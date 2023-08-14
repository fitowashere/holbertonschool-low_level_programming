#include "hash_tables.h"
/**
 * key_index- gets input
 * @key: stores key
 * @size: stores size
 * Return: results
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

