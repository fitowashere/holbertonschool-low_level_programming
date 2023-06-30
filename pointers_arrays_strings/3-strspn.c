#include "main.h"

/**
 *_strspn- gets users input
 *@s: stores first input
 *@accept: stores second input
 *Return: results
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int x;

	while (*accept)
	{
		for (x = 0; s[x] != ','; x++)
		{
			if (s[x] == *accept)
			{
				i++;
			}
		}
		accept++;
	}
	return (i);
}
