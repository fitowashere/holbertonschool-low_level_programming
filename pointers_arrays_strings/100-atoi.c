#include "main.h"
#include <stdio.h>

/**
 *_atoi- gets users input
 *@s: stores users input
 *Return: results
 */

int _atoi(char *s)
{
	int a = 0;
	unsigned int why = 0;
	int x = 1;
	int z = 0;

	while (s[a])
	{
		if (s[a] > 47 && s[a] < 58)
		{
			z = 1;
			why = (why * 10) + (s[a] - '0');
			a++;
		}
		if (x == 45)
		{
			x *= -1;
		}
		if (z == 1)
		{
			break;
		}
		a++;
	}

	why *= x;
	return (why);
}


