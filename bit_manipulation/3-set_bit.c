#include "main.h"

/**
 * set_bit - gets input
 * @index: stores input
 * @n: stores given input
 * Return: results
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	(*n |= (1 << index));
	return (1);
}
