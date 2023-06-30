#include "main.h"

/**
 **_strchr- gets users input
 *@s: stores first input
 *@c: stores second input
 *Return: result
 */

char *_strchr(char *s, char c)
{

	int i = 0;
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (c);
		else if (s[i] == '\0')
			return '\0';
		
	}
}
