#include "main.h"

/**
 **_strncat- gets users inputs
 *@dest: stores first input
 *@src: strores second input
 *@n: stores third input
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	for (x = 0 ; dest[x] != '\0'; x++)
		;

	if (n > 0)
	{
		for (i = 0; src[i] <= src[n]; i++)
		{
			dest[x] = src[i];
			x++;
		}

	}
	else
	{
		for (i = 0; src[i] != '\0'; i++)
		{
			dest[x] = src[i];
			x++;
		}
	}

	dest[x] = '\0';

	return (dest);

}
