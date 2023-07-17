#include <stdlib.h>
#include "dog.h"

/**
 *init_dog- gets users input
 *@d: stores first variable
 *@name: stores second variable
 *@age: stores third variable
 *@owner: stores fourh variale
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
