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

	int i, x;
	char *first;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	first = malloc(strlen(s1) + strlen(s2) + 1);

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (first[i] == '\0')
		{
			for (x = 0; s2[x] != '\0'; x++, i++)
			{
				first[x] = s2[j];
			}
		}
	}
	return (first);
}
