#include "main.h"
#include <stdlib.h>

/**
 *create_array- gets users input
 *@size: gets first input
 *@c: gets second input
 *Return: results
 */

char *create_array(unsigned int size, char c)
{
	unsigned int ui;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (ui =  0; ui < size; ui++)
	{
		array[ui] = c;
	}

	return (array);
}
