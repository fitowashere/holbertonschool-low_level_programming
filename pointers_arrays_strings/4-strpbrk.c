#include "main.h"

/**
 *_strpbrk- gets users input
 *@s: stores first input
 *@accept: second input
 *Return: results
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return ('\0');
}
