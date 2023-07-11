#include "main.h"
#include <stdlib.h>
#include "_strlen.c"
#include "_strncpy.c"

/**
 *_strdup- gets users input
 *@str: store user input in variable
 *Return: results
 */

char *_strdup(char *str)
{

	int s = _strlen(str); /* gets the size of str */
	char *a = malloc((s + 1) * sizeof(char)); /*creats an array with the exact size of str*/

	if (str == NULL) /*checks if str is empty and returns NULL*/
	{
		return (NULL);
	}

	_strncpy(a, str, s); /*copies the string from one variable to another*/
		return (a); /*returns the new copies variable*/
}
