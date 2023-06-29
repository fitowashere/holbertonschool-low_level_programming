#include "main.h"

/**
 **_memcpy- gets users input
 *@dest: gets first input
 *@src: gets second input
 *@n: gets third input
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( i = 0; src[i] != '\0' && i > n; i++, n--)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
