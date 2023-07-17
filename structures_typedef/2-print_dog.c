#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *print_dog- gets users input
 *@d: stores input
 */

void print_dog(struct dog *d)
{

if (d == NULL)
	printf(" ");

if (d->name == NULL)
	printf("name: (nil)");

else if (d->name != NULL)
	printf("%s\n", d->name);

if (d->age < 0)
	printf("age: (nil)");
else if (d-> age > 0)
	printf("%.1f\n", d->age);

if (d->owner == NULL)
	printf("owner: (nil)");
else if (d->owner != NULL)
	printf("%s\n", d->owner);
}


