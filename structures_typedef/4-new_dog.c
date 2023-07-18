#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *new_dog- gets users input
 *@name: gets first chat input
 *@age: gets float input
 *@owner: gets second char input
 *Return: results
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	 dog_t *new_dogs;

	new_dogs = malloc(sizeof(struct dog));

	if (new_dogs == NULL)
		return (NULL);

	new_dogs->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (new_dogs->name == NULL)
	{
		free(new_dogs);
		return (NULL);
	}

	new_dogs->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (new_dogs->owner == NULL)
	{
		free(new_dogs->name);
		free(new_dogs);
		return (NULL);
	}

	if (new_dogs == NULL)
	{
		free(new_dogs);
		return (NULL);
	}

	strcpy(new_dogs->name, name);
	strcpy(new_dogs->owner, owner);
	new_dogs->age = age;

	return (new_dogs);

}
