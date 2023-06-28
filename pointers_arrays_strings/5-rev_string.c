#include "main.h"

/**
 *rev_string- gets users input
 *@s: stores users input
 */

void rev_string(char *s)
{
	int x = 0, z = 0;
	char t;

	while (s[x] != '\0')
	{
		x++;
	}
	for (z = 0; z < x--; z++)
	{
		t = s[x];
		s[x] = s[z];
		s[z] = t;
	}
}
