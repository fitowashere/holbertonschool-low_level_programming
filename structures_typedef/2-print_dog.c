#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *print_dog- gets users input
 *@d: stores input
 *Return: results
 */

void print_dog(struct dog *d)
{

if (d == NULL)
	printf("nothing");

if (d->name == NULL)
	printf("name: (nil)");

if (d->age < 0)
	printf("age:(nil)");

if (d->owner == NULL)
	printf("owner: (nil)");

}


