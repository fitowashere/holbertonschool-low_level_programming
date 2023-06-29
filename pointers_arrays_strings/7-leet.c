#include "main.h"

/**
 *leet- gets users input
 *@f: stores users input
 *Return: results
 */

char *leet(char *f)
{
	char A = "AaEeOoTtLl";
	char N = "4433007711";
	int i = 0;
	char *ptr = f;

	while ( *ptr != '\0')
	{
		while (a[i] != '\0')
		{ 
			if (*ptr == a[i])
			{
				*ptr = num[i];
				break;
			}
			i++;
		}
		ptr++
	}
	return (f);
}
