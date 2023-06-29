#include "main.h"
#include <string.h>

/**
 **_strcat- gets users input
 *@dest: stores first input
 *@src: stores second input
 *Return: results
 */

char *_strcat(char *dest, char *src)
{

	int i, x;

	for (x = 0 ; dest[x] != '\0'; x++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[x] = src[i];
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
