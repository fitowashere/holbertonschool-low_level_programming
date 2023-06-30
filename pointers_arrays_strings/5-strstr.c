#include "main.h"

/**
 *_strstr- gets users input
 *@haystack: stores first input
 *@needle: stores second input
 *Return: results
 */

char *_strstr(char *haystack, char *needle)
{

int a, b;

for (a = 0; haystack[a] != '\0'; a++)
{
	for (b = 0; needle[b]; b++);
	{
		if (haystack[a] == needle[b])
		{
			return (haystack[a]);
		}
	}
}
return ('\0');
}
