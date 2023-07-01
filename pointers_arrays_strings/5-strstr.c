#include "main.h"

/**
 *_strstr- gets users input
 *@haystack: stores first input
 *@needle: stores second input
 *Return: results
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack == *n && *n != 0 && *haystack != 0)
		{
			haystack++;
			n++;
		}
		if (*n == 0)
		{
			return (h);
		}
		haystack = ++h;
	}
	return (0);
}
