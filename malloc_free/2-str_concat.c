#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat- gets users input
 *@s1: gets first input
 *@s2: gets second input
 *Return: results
 */


char *str_concat(char *s1, char *s2)
{

	char *first;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	first = malloc(strlen(s1) + strlen(s2) + 1);

	if (first == NULL)
		return (NULL);
	strcpy (first, s1);
	strcat(first, s2);

	return (first);
}
