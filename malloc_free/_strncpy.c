#include "main.h"

/**
 **_strncpy- gets users input
 *@dest: stores first input
 *@src: stores second input
 *@n: stores third input
 *Return: results
 */

char *_strncpy(char *dest, char *src, int n)
{

	int x;

	for (x = 0 ; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
