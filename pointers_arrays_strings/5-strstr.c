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
		while (*haystack == *needle && *needle != '\0' && *haystack != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		++haystack;
	}
	return (0);
}
