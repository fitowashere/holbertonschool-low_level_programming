#include "main.h"

/**
 **_strcmp- gets user input
 *@s1: stores users first input
 *@s2: stores users second input
 *Return: results
 */

int _strcmp(char *s1, char *s2)
{

	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
