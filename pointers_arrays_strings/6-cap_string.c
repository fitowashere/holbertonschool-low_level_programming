#include "main.h"

/**
 *cap_string- gets users input
 *@f: stores users input
 *Return: results
 */

char *cap_string(char *f)
{
	int i = 0;

	while (f[i] != '\0')
	{
		if (f[i] == ' ' || f[i] == '\t' || f[i] == '\n' ||
				f[i] == ',' || f[i] == ';' || f[i] == '.' ||
				f[i] == '!' || f[i] == '?' || f[i] == '"' ||
				f[i] == '(' || f[i] == ')' || f[i] == '{' ||
				f[i] == '}')
		{
			if (f[i + 1] >= 97 && f[i + 1] <= 122)
			{
				f[i + 1] = f[i + 1] - 32;
			}
		}
		i++;
	}
	return (f);
}
