#include "main.h"
#include <stdlib.h>
#include "string.h"

/**
 *_strdup- gets users input
 *@str: store user input in variable
 *Return: results
 */

char *_strdup(char *str)
{

	char *s, *a;

	if  (str == NULL) /*checks if str is empty and returns NULL*/
	{
		return (NULL);
	}
	s = &str[0];
	a = malloc(strlen(s) + 1);


	if (a == NULL) /*checks if malloc new string is not null*/
	{
		return (NULL);
	}
	memcpy(a, str, strlen(s)); /*copies the string from one variable to another*/

	if (a == NULL) /*checks if str is empty and returns NULL*/
		return (NULL);
	else
		return (a); /*returns the new copies variable*/
}
