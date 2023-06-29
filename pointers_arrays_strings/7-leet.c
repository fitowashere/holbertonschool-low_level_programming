#include "main.h"

/**
 *leet- gets users input
 *@f: stores users input
 *Return: results
 */

char *leet(char *f)
{
	char *A = "AEOTL";
	char *N = "43071";
	int i = 0;
	char *ptr = f;

	while (*ptr != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*ptr == A[i] || *ptr == A[i] + 32)
			{
				*ptr = N[i];
				break;
			}
		}
		ptr++;
	}
	return (f);
}
