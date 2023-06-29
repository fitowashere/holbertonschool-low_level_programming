#include "main.h"

/**
 *_strncat- gets users inputs
 *@dest: stores first input
 *@src: strores second input
 *@n: stores third input
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	for (x = 0 ; dest[x] != '\0'; x++)
		;

	for (i = 0; src[i] != '\0' && n > 0; i++, n--, x++)
	{
		dest[x] = src[i];
	}
	return (dest);
}
