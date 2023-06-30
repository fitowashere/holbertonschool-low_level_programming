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
		while (*haystack && *needle && (*haystack == *needle))
		{
			haystack++;
			needle++;
		}
		if (!*needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
