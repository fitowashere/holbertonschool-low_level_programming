#include "main.h"

/**
 *rev_string- gets users input
 *@s: stores users input
 */

void rev_string(char *s)
{
	int x = 0, y = 0, z = 0;
	char tmp[10];

	while (tmp[x] != '\0')
	{
		x++;
		z++;
		if (tmp[x] == '\0')
		{
			while (z != 0)
			{
				s[y] = tmp[z-1];
				_putchar(s[y]);
				y++;
				z--;
			}
		}
	}
	_putchar(10);
}
