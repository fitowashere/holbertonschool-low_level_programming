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

	while (*s != '\0' && *s != ' ')
	{
		while(*accept != '\0')
		{
			if (*s == *accept)
			{
				i++;
				break;
			}
			accept++;
			if (*accept == '\0')
			{
				break;
			}
			s++;
		}
		return (i);
	}
