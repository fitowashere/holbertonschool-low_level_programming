#include "main.h"
#include <stddef.h>

/**
 **_strchr- gets users input
 *@s: stores first input
 *@c: stores second input
 *Return: result
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return NULL;
}
