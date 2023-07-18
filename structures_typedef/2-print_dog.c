#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *print_dog- gets users input
 *@d: stores input
 *Return: nothing
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);

	else
		printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);

	else
		printf("Owner: (nil)\n");
}


