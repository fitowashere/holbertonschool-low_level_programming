#include "main.h"
/**
 * get_bit - gets input
 * @n: stores input
 * @index: stores input
 * Return: results 
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int var = 0;

	if (index > 63)
		return (-1);

	var = ((n >> index) & 1);

	return (var);
}