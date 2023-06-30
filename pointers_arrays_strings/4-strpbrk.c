#include "main.h"

/**
 *_strpbrk- gets users input
 *@s: stores first input
 *@accept: second input
 *Return: results
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}

	return ('\0');
}
