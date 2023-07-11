#include "main.h"

/**
 * _strlen- gets users input
 * @s: stores users input
 * Return: results
 */

int _strlen(char *s)
{

	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);

}
