#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator- gets inputs
 *@array: stores input
 *@size: stores input
 *@action: stores input
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int counter;

	if (array != NULL && action != NULL)
	{
		for (counter = 0; counter < size; counter++)
		{
			action(array[counter]);
		}
	}

}
