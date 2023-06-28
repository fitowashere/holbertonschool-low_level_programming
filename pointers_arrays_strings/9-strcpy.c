#include "main.h"

/**
 **_strcpy- gets users input
 *@dest: stores users input
 *@src: stores second input
 *Return: results
 */

char *_strcpy(char *dest, char *src)
{

	int a = 0, b;

	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
