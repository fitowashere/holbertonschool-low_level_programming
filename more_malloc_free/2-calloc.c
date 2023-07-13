#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_calloc- gets input
 *@nmemb: stores first input
 *@size: stores second input
 *Return: results
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i;
	char *array;

	array = (char *)malloc(nmemb * size);

	if (size == 0 || nmemb == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;
	}

	return (array);
}
