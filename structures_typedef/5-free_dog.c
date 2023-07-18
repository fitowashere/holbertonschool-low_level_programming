#include "dog.h"
#include <stdlib.h>

/**
 *free_dog- gets users input
 *@d: stores data
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
