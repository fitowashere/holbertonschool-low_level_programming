#include "main.h"

/**
 **_memset- gets users input
 *@s: gets first input
 *@b: gets second input
 *@n: gets third input
 *Return: results
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
