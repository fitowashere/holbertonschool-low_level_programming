#include "hash_tables.h"

/**
 * hash_djb2 - gets input
 * @str: stores input
 * Return: results
 */

unsigned long int hash_djb2(const unsigned char *str)
{

	unsigned long int h;
	int i;

	hash = 5381;
	while ((i = *str++))
	{
		h = ((h << 5) + h) + i;
	}
	return (h);
}

